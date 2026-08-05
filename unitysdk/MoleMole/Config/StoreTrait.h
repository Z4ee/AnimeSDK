#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_STORETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C4785C0)
#define MOLEMOLE_CONFIG_STORETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C4786C0)
#define MOLEMOLE_CONFIG_STORETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C478520)
#define MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C479AF0)
#define MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C478D90)
#define MOLEMOLE_CONFIG_STORETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C47A510)
#define MOLEMOLE_CONFIG_STORETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C4786B0)
#define MOLEMOLE_CONFIG_STORETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C479B50)
#define MOLEMOLE_CONFIG_STORETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C478E10)
#define MOLEMOLE_CONFIG_STORETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C47A380)
#define MOLEMOLE_CONFIG_STORETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C4799B0)
#define MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47A5E0)
#define MOLEMOLE_CONFIG_STORETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C47A5F0)
#define MOLEMOLE_CONFIG_STORETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C47A600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StoreTrait_TypeDefinitionIndex = 88060;

	class StoreTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 StoreID; // 0x18
		::System::String* PlayerPointKey; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* ActiveMemberConfigIDList; // 0x28
		::System::Int32 TeleportID; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* HideTags; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* HideWhiteList; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* Args; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StoreTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StoreTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
