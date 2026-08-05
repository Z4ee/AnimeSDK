#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_10B364F53107673D.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DIALTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4B9440)
#define MOLEMOLE_CONFIG_DIALTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B9540)
#define MOLEMOLE_CONFIG_DIALTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B9430)
#define MOLEMOLE_CONFIG_DIALTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BA0D0)
#define MOLEMOLE_CONFIG_DIALTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4B9980)
#define MOLEMOLE_CONFIG_DIALTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4BA5C0)
#define MOLEMOLE_CONFIG_DIALTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A4B9530)
#define MOLEMOLE_CONFIG_DIALTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BA130)
#define MOLEMOLE_CONFIG_DIALTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4B9A00)
#define MOLEMOLE_CONFIG_DIALTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1A4BA6A0)
#define MOLEMOLE_CONFIG_DIALTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BA430)
#define MOLEMOLE_CONFIG_DIALTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4B9F90)
#define MOLEMOLE_CONFIG_DIALTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BA830)
#define MOLEMOLE_CONFIG_DIALTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4BA840)
#define MOLEMOLE_CONFIG_DIALTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4BA850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DialTrait_TypeDefinitionIndex = 63167;

	class DialTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::Enum_3_10B364F53107673D rotateAxis; // 0x18
		::System::Single rotateSpeed; // 0x1C
		::System::Single initialRotation; // 0x20
		::System::Boolean useRigidbody; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::DialTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::DialTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::DialTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::DialTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entity);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
