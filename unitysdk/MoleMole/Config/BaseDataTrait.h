#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_BASEDATATRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x18F2C0B0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x18F2C050)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F2C960)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18F2C220)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x18F2CE70)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x18F2C1B0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F2C9C0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x18F2C2A0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F2CCC0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x18F2C800)
#define MOLEMOLE_CONFIG_BASEDATATRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2CF10)
#define MOLEMOLE_CONFIG_BASEDATATRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x18F2CF30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseDataTrait_TypeDefinitionIndex = 68408;

	class BaseDataTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GameplayTags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::BaseDataTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::BaseDataTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::BaseDataTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::BaseDataTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
