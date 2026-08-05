#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define MOLEMOLE_PRELOADOBJECT_METHOD_1_0BD4114815AFCF15_OFFSET UNITYSDK_OFFSET(0x1385D270)
#define MOLEMOLE_PRELOADOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1385CF10)
#define MOLEMOLE_PRELOADOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1385CF00)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadObject_TypeDefinitionIndex = 66338;

	class PreloadObject : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_AssetTpeArray()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(PreloadObject_TypeDefinitionIndex)->GetStaticField(0x3FA40);
		}
		::System::String* AssetPath; // 0x10
		::System::Int32 AssetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADOBJECT__CCTOR_OFFSET))();
		}

		::System::Type* Method_1_0BD4114815AFCF15()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADOBJECT_METHOD_1_0BD4114815AFCF15_OFFSET))(this);
		}
	};
}
