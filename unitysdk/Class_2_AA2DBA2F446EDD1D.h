#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_AA2DBA2F446EDD1D_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBC58150)
#define CLASS_2_AA2DBA2F446EDD1D_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xBC58390)
#define CLASS_2_AA2DBA2F446EDD1D_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xBC58160)
#define CLASS_2_AA2DBA2F446EDD1D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBC58350)
#define CLASS_2_AA2DBA2F446EDD1D__CTOR_OFFSET UNITYSDK_OFFSET(0xBC58440)

inline static constexpr unsigned int Class_2_AA2DBA2F446EDD1D_TypeDefinitionIndex = 56292;

class Class_2_AA2DBA2F446EDD1D : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::UInt32 BOKJJKFCFME; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
