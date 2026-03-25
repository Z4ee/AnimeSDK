#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_6C804DB9E22366AE.h"
#include "unitysdk/System/Object.h"

class Class_1_43B182500A10FC7B;
class Class_1_5E886076706C3923;

#define CLASS_1_CD8FCAAF99EE887F_CLEAR_OFFSET UNITYSDK_OFFSET(0x8D32810)
#define CLASS_1_CD8FCAAF99EE887F_GET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x8D329A0)
#define CLASS_1_CD8FCAAF99EE887F_METHOD_1_0570074FB1FCC162_OFFSET UNITYSDK_OFFSET(0x8D32860)
#define CLASS_1_CD8FCAAF99EE887F_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8D329C0)
#define CLASS_1_CD8FCAAF99EE887F_METHOD_1_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x8D328F0)
#define CLASS_1_CD8FCAAF99EE887F_SET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x8D329B0)
#define CLASS_1_CD8FCAAF99EE887F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D32A10)

inline static constexpr unsigned int Class_1_CD8FCAAF99EE887F_TypeDefinitionIndex = 59121;

class Class_1_CD8FCAAF99EE887F : public ::System::Object
{
public:
	::Class_1_43B182500A10FC7B* Field_1_2; // 0x10
	::Class_1_5E886076706C3923* Field_1_1; // 0x18
	::System::Boolean _ShowEffect_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD8FCAAF99EE887F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD8FCAAF99EE887F_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_0570074FB1FCC162(::Struct_2_6C804DB9E22366AE a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6C804DB9E22366AE))((::PBYTE)hIl2Cpp + CLASS_1_CD8FCAAF99EE887F_METHOD_1_0570074FB1FCC162_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD8FCAAF99EE887F_METHOD_1_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean get_ShowEffect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD8FCAAF99EE887F_GET_SHOWEFFECT_OFFSET))(this);
	}

	::System::Void set_ShowEffect(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD8FCAAF99EE887F_SET_SHOWEFFECT_OFFSET))(this, value);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD8FCAAF99EE887F_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
