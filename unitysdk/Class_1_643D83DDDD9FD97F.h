#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"

class Class_1_34917908B7833130;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_643D83DDDD9FD97F_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x162A6600)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x162A62A0)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_3456633D994FB6C5_OFFSET UNITYSDK_OFFSET(0x162A61C0)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_4B5E1CC26F7D6D2B_OFFSET UNITYSDK_OFFSET(0x162A6300)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0x162A64C0)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_9B9CE89CC018BFCF_OFFSET UNITYSDK_OFFSET(0x162A63A0)
#define CLASS_1_643D83DDDD9FD97F_METHOD_1_F8185CE5F86C0CF5_OFFSET UNITYSDK_OFFSET(0x162A5E70)
#define CLASS_1_643D83DDDD9FD97F__CTOR_OFFSET UNITYSDK_OFFSET(0x162A6040)

inline static constexpr unsigned int Class_1_643D83DDDD9FD97F_TypeDefinitionIndex = 71604;

class Class_1_643D83DDDD9FD97F : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_34917908B7833130*>* GANFMEPNBJK; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* MGCLEGKHOCB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F__CTOR_OFFSET))(this);
	}

	static ::Class_1_643D83DDDD9FD97F* Method_1_F8185CE5F86C0CF5(::RPG::GameCore::BattleUIPanelType a1)
	{
		return ((::Class_1_643D83DDDD9FD97F*(*)(::RPG::GameCore::BattleUIPanelType))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F_METHOD_1_F8185CE5F86C0CF5_OFFSET))(a1);
	}

	::System::Void Method_1_3456633D994FB6C5(::Class_1_34917908B7833130* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34917908B7833130*))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F_METHOD_1_3456633D994FB6C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B5E1CC26F7D6D2B(::Class_1_34917908B7833130* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34917908B7833130*))((::PBYTE)hIl2Cpp + CLASS_1_643D83DDDD9FD97F_METHOD_1_4B5E1CC26F7D6D2B_OFFSET))(this, a1);
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
