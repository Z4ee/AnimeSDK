#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"

class Class_1_CA217ABF4E3B4F3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_643D83DDDD9FD97F_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1436AEA0)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_19A03D9E098C9F1A_OFFSET UNITYSDK_OFFSET(0x1436A8F0)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1436AF90)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0x1436AD60)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_9B9CE89CC018BFCF_OFFSET UNITYSDK_OFFSET(0x1436AC70)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_F20D32506FA3D9B7_OFFSET UNITYSDK_OFFSET(0x1436ABE0)
#define CLASS_1_643D83DDDD9FD97F__CTOR_OFFSET UNITYSDK_OFFSET(0x1436AA90)

inline static constexpr unsigned int Class_1_643D83DDDD9FD97F_TypeDefinitionIndex = 66979;

class Class_1_643D83DDDD9FD97F : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_CA217ABF4E3B4F3F*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F__CTOR_OFFSET))(this);
	}

	static ::Class_1_643D83DDDD9FD97F* Method_1_19A03D9E098C9F1A(::RPG::GameCore::BattleUIPanelType a1)
	{
		return ((::Class_1_643D83DDDD9FD97F*(*)(::RPG::GameCore::BattleUIPanelType))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F_METHOD_1_19A03D9E098C9F1A_OFFSET))(a1);
	}

	::System::Void Method_1_F20D32506FA3D9B7(::Class_1_CA217ABF4E3B4F3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F_METHOD_1_F20D32506FA3D9B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B9CE89CC018BFCF(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F_METHOD_1_9B9CE89CC018BFCF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_91A773A85E497E9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F_METHOD_1_91A773A85E497E9E_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
