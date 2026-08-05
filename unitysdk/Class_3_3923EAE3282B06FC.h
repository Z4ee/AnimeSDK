#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_68B3FFD528A3EFF0.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3923EAE3282B06FC_METHOD_3_F37AD4BE6D7C61D1_OFFSET UNITYSDK_OFFSET(0x13B8FAE0)
#define CLASS_3_3923EAE3282B06FC__CTOR_OFFSET UNITYSDK_OFFSET(0x13B8F9F0)

inline static constexpr unsigned int Class_3_3923EAE3282B06FC_TypeDefinitionIndex = 77937;

class Class_3_3923EAE3282B06FC : public ::Class_2_68B3FFD528A3EFF0
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_3_3923EAE3282B06FC__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F37AD4BE6D7C61D1(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_3_3923EAE3282B06FC_METHOD_3_F37AD4BE6D7C61D1_OFFSET))(this, a1);
	}
};
