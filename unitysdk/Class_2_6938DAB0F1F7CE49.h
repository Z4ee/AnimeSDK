#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MockAnimator.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define CLASS_2_6938DAB0F1F7CE49_METHOD_2_982A20B755038310_OFFSET UNITYSDK_OFFSET(0x11894E10)
#define CLASS_2_6938DAB0F1F7CE49__CTOR_OFFSET UNITYSDK_OFFSET(0x11894E60)

inline static constexpr unsigned int Class_2_6938DAB0F1F7CE49_TypeDefinitionIndex = 70267;

class Class_2_6938DAB0F1F7CE49 : public ::RPG::Client::MockAnimator
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6938DAB0F1F7CE49__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_982A20B755038310(::System::Int32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6938DAB0F1F7CE49_METHOD_2_982A20B755038310_OFFSET))(this, a1);
	}
};
