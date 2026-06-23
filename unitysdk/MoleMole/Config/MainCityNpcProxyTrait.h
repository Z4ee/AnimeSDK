#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x18F40470)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x18F405D0)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x18F40460)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F40A60)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18F406B0)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x18F40ED0)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x18F40560)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F40AC0)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x18F40730)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F40D30)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x18F40920)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F40F70)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x18F40F80)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x18F40F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MainCityNpcProxyTrait_TypeDefinitionIndex = 59616;

	class MainCityNpcProxyTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 TagID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MainCityNpcProxyTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MainCityNpcProxyTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MainCityNpcProxyTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MainCityNpcProxyTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
