#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"
#include "unitysdk/UnityEngine/Vector4.h"

class FiveDimRenderingItem;

#define FDRIDISSOLVEOPERATION_METHOD_3_2FE10362D7B73426_OFFSET UNITYSDK_OFFSET(0x156E42C0)
#define FDRIDISSOLVEOPERATION_METHOD_3_4E6960335B200E06_OFFSET UNITYSDK_OFFSET(0x156E3DB0)
#define FDRIDISSOLVEOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x156E41F0)
#define FDRIDISSOLVEOPERATION_METHOD_3_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x156E4240)
#define FDRIDISSOLVEOPERATION_METHOD_3_F628877C607CB69E_OFFSET UNITYSDK_OFFSET(0x156E4310)
#define FDRIDISSOLVEOPERATION_METHOD_3_FDBBD6114921827A_1_OFFSET UNITYSDK_OFFSET(0x156E3EA0)
#define FDRIDISSOLVEOPERATION_METHOD_3_FDBBD6114921827A_OFFSET UNITYSDK_OFFSET(0x156E39E0)
#define FDRIDISSOLVEOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x156E44A0)
#define FDRIDISSOLVEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x156E4480)

inline static constexpr unsigned int FDRIDissolveOperation_TypeDefinitionIndex = 47118;

class FDRIDissolveOperation : public ::FDRIMatStateOperation
{
public:
	static ::System::Int32* StaticGet__DissolveUseCustomData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FDRIDissolveOperation_TypeDefinitionIndex)->GetStaticField(0x149F0);
	}
	::System::Single DissolveRate; // 0x20
	::System::Single DissolveScale; // 0x24
	::System::Boolean DissolveON; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION__CCTOR_OFFSET))();
	}

	::System::Void Method_3_FDBBD6114921827A(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_FDBBD6114921827A_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E6960335B200E06(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_4E6960335B200E06_OFFSET))(this, a1);
	}

	::System::Void Method_3_FDBBD6114921827A_1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_FDBBD6114921827A_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_3_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_3_2FE10362D7B73426(::FiveDimRenderingItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_2FE10362D7B73426_OFFSET))(this, a1);
	}

	::System::Void Method_3_F628877C607CB69E(::UnityEngine::Vector4& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_F628877C607CB69E_OFFSET))(this, a1);
	}
};
