#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
class Class_2_F3CFF1AFF7EE7DCD;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0x12C59760)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x12C589B0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12C58B10)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12C589A0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12C59100)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12C58C10)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12C59640)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12C58AA0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12C59160)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12C58C90)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12C594A0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12C58FC0)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5A870)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12C5A880)
#define MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12C5A890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbyssS2ExhibitAvatarTrait_TypeDefinitionIndex = 78664;

	class AbyssS2ExhibitAvatarTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PlayerOrder; // 0x18
		::System::Boolean IsNeedWeapon; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AbyssS2ExhibitAvatarTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AbyssS2ExhibitAvatarTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AbyssS2ExhibitAvatarTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AbyssS2ExhibitAvatarTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* extraComponents)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT_BUILDENTITY_OFFSET))(this, handle, extraComponents);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABYSSS2EXHIBITAVATARTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
