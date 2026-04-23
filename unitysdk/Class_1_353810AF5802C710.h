#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"

class Class_1_353810AF5802C710_Class_1_995E785839A92A6B;
class Class_1_7D9075FD1A3992DE;
namespace RPG::GameCore { class LevelPedestrianV2EmitInfo; }
namespace RPG::GameCore { class LevelPedestrianV2MemberInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_353810AF5802C710_DISPOSE_OFFSET UNITYSDK_OFFSET(0x976D2C0)
#define CLASS_1_353810AF5802C710_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x976D550)
#define CLASS_1_353810AF5802C710_METHOD_1_311B9150CA39CE27_OFFSET UNITYSDK_OFFSET(0x976DB40)
#define CLASS_1_353810AF5802C710_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x976D8E0)
#define CLASS_1_353810AF5802C710_METHOD_1_45C7AFE4F89DF1ED_OFFSET UNITYSDK_OFFSET(0x976F8E0)
#define CLASS_1_353810AF5802C710_METHOD_1_5ECC71353B824E89_OFFSET UNITYSDK_OFFSET(0x976E9C0)
#define CLASS_1_353810AF5802C710_METHOD_1_759DFE2A56EAD6B8_OFFSET UNITYSDK_OFFSET(0x976F6B0)
#define CLASS_1_353810AF5802C710_METHOD_1_7B05759084C3166D_OFFSET UNITYSDK_OFFSET(0x976D6A0)
#define CLASS_1_353810AF5802C710_METHOD_1_B1228858D53FBCB4_OFFSET UNITYSDK_OFFSET(0x976FAA0)
#define CLASS_1_353810AF5802C710_METHOD_1_B149C39105DC7C57_OFFSET UNITYSDK_OFFSET(0x976EF50)
#define CLASS_1_353810AF5802C710_METHOD_1_B99EFA50F304BCB8_OFFSET UNITYSDK_OFFSET(0x976EAE0)
#define CLASS_1_353810AF5802C710_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x976F870)
#define CLASS_1_353810AF5802C710_METHOD_1_DC75B2C63D15F543_OFFSET UNITYSDK_OFFSET(0x976E8F0)
#define CLASS_1_353810AF5802C710_METHOD_1_E8263842FA417B4B_OFFSET UNITYSDK_OFFSET(0x976D320)
#define CLASS_1_353810AF5802C710_METHOD_1_F2AC737E810B3EE7_OFFSET UNITYSDK_OFFSET(0x976D5D0)
#define CLASS_1_353810AF5802C710__CTOR_OFFSET UNITYSDK_OFFSET(0x976D000)

inline static constexpr unsigned int Class_1_353810AF5802C710_TypeDefinitionIndex = 63879;

class Class_1_353810AF5802C710 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::Class_1_7D9075FD1A3992DE* Field_1_2; // 0x10
	::System::Comparison_1<::Class_1_353810AF5802C710_Class_1_995E785839A92A6B*>* Field_1_8; // 0x18
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2EmitInfo*>* Field_1_3; // 0x20
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberInfo*>* Field_1_4; // 0x28
	::Il2CppArray<::System::Boolean>* Field_1_7; // 0x30
	::Il2CppArray<::Class_1_353810AF5802C710_Class_1_995E785839A92A6B*>* Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40

	::System::Void _ctor(::Class_1_7D9075FD1A3992DE* a1, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2EmitInfo*>* a2, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberInfo*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D9075FD1A3992DE*, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2EmitInfo*>*, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E8263842FA417B4B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_E8263842FA417B4B_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED>* Method_1_F2AC737E810B3EE7(::System::Single a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_F2AC737E810B3EE7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7B05759084C3166D(::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED&))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_7B05759084C3166D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B99EFA50F304BCB8(::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED& a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_B99EFA50F304BCB8_OFFSET))(this, a1, a2);
	}

	::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED Method_1_759DFE2A56EAD6B8(::Struct_2_085541A9CFF64383 a1, ::RPG::Client::EPedestrianV2MotionState a2, ::System::Int32 a3)
	{
		return ((::Class_1_353810AF5802C710_Struct_2_E821FD00D05A2DED(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::RPG::Client::EPedestrianV2MotionState, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_759DFE2A56EAD6B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_DC75B2C63D15F543(::Struct_2_085541A9CFF64383 a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_DC75B2C63D15F543_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B149C39105DC7C57(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_B149C39105DC7C57_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_311B9150CA39CE27(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_311B9150CA39CE27_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_45C7AFE4F89DF1ED(::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_45C7AFE4F89DF1ED_OFFSET))(this, a1);
	}

	::System::Single Method_1_B1228858D53FBCB4(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::System::Single(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_B1228858D53FBCB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::RPG::GameCore::LevelPedestrianV2MemberInfo* Method_1_5ECC71353B824E89()
	{
		return ((::RPG::GameCore::LevelPedestrianV2MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_5ECC71353B824E89_OFFSET))(this);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_353810AF5802C710_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}
};
