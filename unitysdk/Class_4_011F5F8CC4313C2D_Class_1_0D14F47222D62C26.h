#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_011F5F8CC4313C2D_Class_1_BA28808B5689C202;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_011F5F8CC4313C2D_CLASS_1_0D14F47222D62C26_METHOD_1_40D741483CBF207D_OFFSET UNITYSDK_OFFSET(0x14EA6F20)
#define CLASS_4_011F5F8CC4313C2D_CLASS_1_0D14F47222D62C26__CTOR_OFFSET UNITYSDK_OFFSET(0x14EA6F10)

inline static constexpr unsigned int Class_4_011F5F8CC4313C2D_Class_1_0D14F47222D62C26_TypeDefinitionIndex = 47205;

class Class_4_011F5F8CC4313C2D_Class_1_0D14F47222D62C26 : public ::System::Object
{
public:
	::Class_4_011F5F8CC4313C2D_Class_1_BA28808B5689C202* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt64 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D_CLASS_1_0D14F47222D62C26__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_40D741483CBF207D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D_CLASS_1_0D14F47222D62C26_METHOD_1_40D741483CBF207D_OFFSET))(this, a1);
	}
};
