#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MAPICONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1619D370)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1619D4D0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1619D2E0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1619EB20)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1619D720)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1619F520)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1619D460)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1619EB80)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1619D7A0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1619F380)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1619E9E0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1619F630)
#define MOLEMOLE_CONFIG_MAPICONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1619F640)
#define MOLEMOLE_CONFIG_MAPICONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1619F650)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MapIconTrait_TypeDefinitionIndex = 58322;

	class MapIconTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 InfoPanelID; // 0x18
		::System::Boolean ShowInOutside; // 0x1C
		::System::String* VOStateKey; // 0x20
		::System::Int32 VOStateValue; // 0x28
		::System::String* ShowVOStateKey; // 0x30
		::System::Int32 ShowVOStateValue; // 0x38
		::System::Boolean CanTrack; // 0x3C
		::System::Boolean DefaultHide; // 0x3D
		::System::String* EffectIn3d; // 0x40
		::UnityEngine::Vector3 EffectIn3dOffset; // 0x48
		::System::Single EffectIn3dScale; // 0x54
		::System::Collections::Generic::List_1<::System::Int32>* ValidSuitIndex; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MapIconTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MapIconTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MapIconTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MapIconTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
