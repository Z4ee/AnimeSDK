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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x15896300)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x15896460)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x158962B0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15896910)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15896540)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x15896DB0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x158963F0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x15896970)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x158965C0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x15896C10)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x158967D0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x15896E50)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x15896E60)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x15896E70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttractorTrait_TypeDefinitionIndex = 67503;

	class AttractorTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* attractorInstanceIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AttractorTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AttractorTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AttractorTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AttractorTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
