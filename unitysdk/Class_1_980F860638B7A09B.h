#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_136;
class Class_1_EBB304FBF0D71A99;
namespace RPG::GameCore { class FiveDimChestConfig; }
namespace System { class String; }

#define CLASS_1_980F860638B7A09B_METHOD_1_122ED748B73A1C37_OFFSET UNITYSDK_OFFSET(0x180B2950)
#define CLASS_1_980F860638B7A09B_METHOD_1_87B15802B1D84586_OFFSET UNITYSDK_OFFSET(0x180B2E90)
#define CLASS_1_980F860638B7A09B_METHOD_1_9E4F674247F4978C_OFFSET UNITYSDK_OFFSET(0x180B2BF0)
#define CLASS_1_980F860638B7A09B_METHOD_1_ACC6B73F43B34F98_OFFSET UNITYSDK_OFFSET(0x180B2AA0)
#define CLASS_1_980F860638B7A09B_METHOD_1_C240AA9558F7E8F1_OFFSET UNITYSDK_OFFSET(0x180B2D40)

inline static constexpr unsigned int Class_1_980F860638B7A09B_TypeDefinitionIndex = 38142;

class Class_1_980F860638B7A09B : public ::System::Object
{
public:
	static ::Class_1_EBB304FBF0D71A99* Method_1_122ED748B73A1C37(::Class_0_16E4307DCC419505_136* a1)
	{
		return ((::Class_1_EBB304FBF0D71A99*(*)(::Class_0_16E4307DCC419505_136*))((::PBYTE)hIl2Cpp + CLASS_1_980F860638B7A09B_METHOD_1_122ED748B73A1C37_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_ACC6B73F43B34F98(::Class_0_16E4307DCC419505_136* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_136*))((::PBYTE)hIl2Cpp + CLASS_1_980F860638B7A09B_METHOD_1_ACC6B73F43B34F98_OFFSET))(a1);
	}

	static ::System::Void Method_1_9E4F674247F4978C(::Class_0_16E4307DCC419505_136* a1, ::RPG::GameCore::FiveDimChestConfig* a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::FiveDimChestState a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_136*, ::RPG::GameCore::FiveDimChestConfig*, ::System::Boolean, ::System::Int32, ::RPG::GameCore::FiveDimChestState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_980F860638B7A09B_METHOD_1_9E4F674247F4978C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_C240AA9558F7E8F1(::Class_0_16E4307DCC419505_136* a1, ::RPG::GameCore::FiveDimChestConfig* a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::FiveDimChestState a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_136*, ::RPG::GameCore::FiveDimChestConfig*, ::System::Boolean, ::System::Int32, ::RPG::GameCore::FiveDimChestState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_980F860638B7A09B_METHOD_1_C240AA9558F7E8F1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_87B15802B1D84586(::Class_0_16E4307DCC419505_136* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_136*))((::PBYTE)hIl2Cpp + CLASS_1_980F860638B7A09B_METHOD_1_87B15802B1D84586_OFFSET))(a1);
	}
};
