#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarServant; }

#define CLASS_1_E7FF4487CB61A16C_METHOD_1_A916E7A49AD8BE65_OFFSET UNITYSDK_OFFSET(0xA1FD380)
#define CLASS_1_E7FF4487CB61A16C__CTOR_OFFSET UNITYSDK_OFFSET(0xA1FD520)

inline static constexpr unsigned int Class_1_E7FF4487CB61A16C_TypeDefinitionIndex = 50883;

class Class_1_E7FF4487CB61A16C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7FF4487CB61A16C__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarServant* Method_1_A916E7A49AD8BE65(::Struct_2_90E529DB4DCB014F& a1)
	{
		return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID, ::Struct_2_90E529DB4DCB014F&))((::PBYTE)hIl2Cpp + CLASS_1_E7FF4487CB61A16C_METHOD_1_A916E7A49AD8BE65_OFFSET))(this, a1);
	}
};
