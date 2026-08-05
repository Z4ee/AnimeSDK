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

#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4C1C10)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4C1D10)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4C1BA0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4C2710)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4C2070)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4C2D00)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A4C1D00)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4C2770)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4C20F0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4C2B70)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4C25D0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C2DA0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4C2DB0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4C2DC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovErosionTrait_TypeDefinitionIndex = 42777;

	class ZenkovErosionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ErosionTag; // 0x18
		::System::String* StateKey; // 0x20
		::System::Int32 StateValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovErosionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovErosionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovErosionTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovErosionTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
