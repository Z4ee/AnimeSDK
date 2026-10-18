#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/MVector3.h"

class Class_3_2E30C7F086AF0C81;
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_9F337706875E4C3C_METHOD_3_58ECC96A547D80A6_OFFSET UNITYSDK_OFFSET(0xB1FF330)
#define CLASS_3_9F337706875E4C3C_METHOD_3_AD0203DB0E1D06F8_OFFSET UNITYSDK_OFFSET(0xB1FF4B0)
#define CLASS_3_9F337706875E4C3C_METHOD_3_E81CEED1B22DE2BF_OFFSET UNITYSDK_OFFSET(0xB1FF1E0)
#define CLASS_3_9F337706875E4C3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1FF070)
#define CLASS_3_9F337706875E4C3C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FEFC0)

inline static constexpr unsigned int Class_3_9F337706875E4C3C_TypeDefinitionIndex = 55739;

class Class_3_9F337706875E4C3C : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2E30C7F086AF0C81*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FloatCurve*>* KGBMKDCECOJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2E30C7F086AF0C81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2E30C7F086AF0C81*))((::PBYTE)hIl2Cpp + CLASS_3_9F337706875E4C3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F337706875E4C3C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_E81CEED1B22DE2BF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_9F337706875E4C3C_METHOD_3_E81CEED1B22DE2BF_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_3_58ECC96A547D80A6()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F337706875E4C3C_METHOD_3_58ECC96A547D80A6_OFFSET))(this);
	}

	::RPG::GameCore::FloatCurve* Method_3_AD0203DB0E1D06F8(::System::String* a1)
	{
		return ((::RPG::GameCore::FloatCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9F337706875E4C3C_METHOD_3_AD0203DB0E1D06F8_OFFSET))(this, a1);
	}
};
