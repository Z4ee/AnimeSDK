#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class RenderSequenceBase; }

#define CLASS_1_1E580D1236EA864D_METHOD_1_D5000A3482D01C3D_OFFSET UNITYSDK_OFFSET(0x15662C60)
#define CLASS_1_1E580D1236EA864D__CTOR_OFFSET UNITYSDK_OFFSET(0x15662CA0)

inline static constexpr unsigned int Class_1_1E580D1236EA864D_TypeDefinitionIndex = 64172;

class Class_1_1E580D1236EA864D : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::RenderSequenceBase* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E580D1236EA864D__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::RenderSequenceBase* Method_1_D5000A3482D01C3D()
	{
		return ((::MoleMole::HollowChessboard::RenderSequenceBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E580D1236EA864D_METHOD_1_D5000A3482D01C3D_OFFSET))(this);
	}
};
