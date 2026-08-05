#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class DungeonMiscCtrlInfo; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BACB0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4BAA40)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1A4BAD10)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_2B91ABFB797E74DF_OFFSET UNITYSDK_OFFSET(0x1A4BB2F0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1A4BB4A0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_36EF973437B80314_OFFSET UNITYSDK_OFFSET(0x1A4BAF00)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1A4BAAC0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1A4BA930)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1A4BA8E0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A4BAA30)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_F6A166A0757E5C6F_OFFSET UNITYSDK_OFFSET(0x1A4BB190)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BB180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonMiscCtrlDecor_TypeDefinitionIndex = 44341;

	class DungeonMiscCtrlDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::DungeonMiscCtrlInfo*>* CtrlList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_36EF973437B80314(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_36EF973437B80314_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DungeonMiscCtrlDecor* Method_2_F6A166A0757E5C6F(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DungeonMiscCtrlDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_F6A166A0757E5C6F_OFFSET))(a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::DungeonMiscCtrlDecor* Method_2_2B91ABFB797E74DF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DungeonMiscCtrlDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_2B91ABFB797E74DF_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLDECOR_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}
	};
}
