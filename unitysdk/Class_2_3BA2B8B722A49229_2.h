#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46AE1E47FF3C5595.h"
#include "unitysdk/RPG/Client/LogicStateType.h"

namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define CLASS_2_3BA2B8B722A49229_2_METHOD_2_705FC510FB6A43E6_OFFSET UNITYSDK_OFFSET(0xD7E09D0)
#define CLASS_2_3BA2B8B722A49229_2_METHOD_2_70C618A9A54396F2_OFFSET UNITYSDK_OFFSET(0xD7E0910)
#define CLASS_2_3BA2B8B722A49229_2_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xD7E0970)
#define CLASS_2_3BA2B8B722A49229_2_METHOD_2_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0xD7E0A40)
#define CLASS_2_3BA2B8B722A49229_2_METHOD_2_FE60265F2E236E58_OFFSET UNITYSDK_OFFSET(0xD7E0920)
#define CLASS_2_3BA2B8B722A49229_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E0900)

inline static constexpr unsigned int Class_2_3BA2B8B722A49229_2_TypeDefinitionIndex = 54278;

class Class_2_3BA2B8B722A49229_2 : public ::Class_1_46AE1E47FF3C5595
{
public:
	::System::Void _ctor(::RPG::Client::PlayerModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + CLASS_2_3BA2B8B722A49229_2__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LogicStateType Method_2_70C618A9A54396F2()
	{
		return ((::RPG::Client::LogicStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA2B8B722A49229_2_METHOD_2_70C618A9A54396F2_OFFSET))(this);
	}

	::System::Boolean Method_2_FE60265F2E236E58(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA2B8B722A49229_2_METHOD_2_FE60265F2E236E58_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA2B8B722A49229_2_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_705FC510FB6A43E6(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA2B8B722A49229_2_METHOD_2_705FC510FB6A43E6_OFFSET))(this, P0);
	}

	::System::Int32 Method_2_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA2B8B722A49229_2_METHOD_2_EBCA8E5D8C47FF73_OFFSET))(this);
	}
};
