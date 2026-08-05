#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DD7F1F4A3856E004;
class Class_2_7109EE9F6F5F9F64;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DB8908D2C9588447_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x157F3B50)
#define CLASS_1_DB8908D2C9588447_METHOD_1_F9A753AD4F1E0BB3_OFFSET UNITYSDK_OFFSET(0x157F41C0)
#define CLASS_1_DB8908D2C9588447__CTOR_OFFSET UNITYSDK_OFFSET(0x157F41B0)

inline static constexpr unsigned int Class_1_DB8908D2C9588447_TypeDefinitionIndex = 77947;

class Class_1_DB8908D2C9588447 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DD7F1F4A3856E004*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8908D2C9588447__CTOR_OFFSET))(this);
	}

	::System::Boolean InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* a1, ::Class_2_7109EE9F6F5F9F64*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + CLASS_1_DB8908D2C9588447_INITFORMCONFIG_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F9A753AD4F1E0BB3(::MoleMole::HollowChessboard::HollowEntity* a1, ::Class_2_7109EE9F6F5F9F64*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + CLASS_1_DB8908D2C9588447_METHOD_1_F9A753AD4F1E0BB3_OFFSET))(this, a1, a2);
	}
};
