#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_495;
namespace RPG::Client { class ConditionChecker; }

#define CLASS_1_6A94AC6E64219DB2_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xD1B3D40)
#define CLASS_1_6A94AC6E64219DB2__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B3D30)

inline static constexpr unsigned int Class_1_6A94AC6E64219DB2_TypeDefinitionIndex = 48523;

class Class_1_6A94AC6E64219DB2 : public ::System::Object
{
public:
	::RPG::Client::ConditionChecker* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ConditionChecker* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConditionChecker*))((::PBYTE)hIl2Cpp + CLASS_1_6A94AC6E64219DB2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_495* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_495*))((::PBYTE)hIl2Cpp + CLASS_1_6A94AC6E64219DB2_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}
};
