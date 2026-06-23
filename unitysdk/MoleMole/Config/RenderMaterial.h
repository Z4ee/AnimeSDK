#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RENDERMATERIAL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FFA0D0)
#define MOLEMOLE_CONFIG_RENDERMATERIAL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19FFA4D0)
#define MOLEMOLE_CONFIG_RENDERMATERIAL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FFA130)
#define MOLEMOLE_CONFIG_RENDERMATERIAL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FFA550)
#define MOLEMOLE_CONFIG_RENDERMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFAA50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RenderMaterial_TypeDefinitionIndex = 45402;

	class RenderMaterial : public ::System::Object
	{
	public:
		::System::String* RenderPath; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* MaterialIndexList; // 0x18
		::System::Boolean ApplyAllMaterials; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RENDERMATERIAL__CTOR_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RENDERMATERIAL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RENDERMATERIAL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RENDERMATERIAL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RENDERMATERIAL_INTERNALFROMFLX_OFFSET))(this, node);
		}
	};
}
