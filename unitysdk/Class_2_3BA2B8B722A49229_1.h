#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46AE1E47FF3C5595.h"

namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define CLASS_2_3BA2B8B722A49229_1_METHOD_2_705FC510FB6A43E6_OFFSET UNITYSDK_OFFSET(0x1177F860)
#define CLASS_2_3BA2B8B722A49229_1_METHOD_2_FE60265F2E236E58_OFFSET UNITYSDK_OFFSET(0x1177F810)
#define CLASS_2_3BA2B8B722A49229_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1177F800)

inline static constexpr unsigned int Class_2_3BA2B8B722A49229_1_TypeDefinitionIndex = 61440;

class Class_2_3BA2B8B722A49229_1 : public ::Class_1_46AE1E47FF3C5595
{
public:
	::System::Void _ctor(::RPG::Client::PlayerModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + CLASS_2_3BA2B8B722A49229_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FE60265F2E236E58(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA2B8B722A49229_1_METHOD_2_FE60265F2E236E58_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_705FC510FB6A43E6(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA2B8B722A49229_1_METHOD_2_705FC510FB6A43E6_OFFSET))(this, P0);
	}
};
