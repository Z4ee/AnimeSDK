#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_61449724F4025E5E.h"
#include "unitysdk/System/Object.h"

class Class_1_E7FF4487CB61A16C;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_50A3FB4415D517D6_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xAA55190)
#define CLASS_1_50A3FB4415D517D6_METHOD_1_A916E7A49AD8BE65_OFFSET UNITYSDK_OFFSET(0xAA551B0)
#define CLASS_1_50A3FB4415D517D6_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xAA551A0)
#define CLASS_1_50A3FB4415D517D6__CTOR_OFFSET UNITYSDK_OFFSET(0xAA55350)

inline static constexpr unsigned int Class_1_50A3FB4415D517D6_TypeDefinitionIndex = 57834;

class Class_1_50A3FB4415D517D6 : public ::System::Object
{
public:
	::Class_1_E7FF4487CB61A16C* _Factory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_61449724F4025E5E, ::RPG::AvatarSystem::AvatarServant*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50A3FB4415D517D6__CTOR_OFFSET))(this);
	}

	::Class_1_E7FF4487CB61A16C* get_Factory()
	{
		return ((::Class_1_E7FF4487CB61A16C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50A3FB4415D517D6_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_E7FF4487CB61A16C* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7FF4487CB61A16C*))((::PBYTE)hIl2Cpp + CLASS_1_50A3FB4415D517D6_SET_FACTORY_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::AvatarServant* Method_1_A916E7A49AD8BE65(::Struct_2_61449724F4025E5E& a1)
	{
		return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID, ::Struct_2_61449724F4025E5E&))((::PBYTE)hIl2Cpp + CLASS_1_50A3FB4415D517D6_METHOD_1_A916E7A49AD8BE65_OFFSET))(this, a1);
	}
};
