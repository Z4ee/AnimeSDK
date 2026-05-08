#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9C00C44C10E42328.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D72E01AB250E10FD_METHOD_3_40D741483CBF207D_OFFSET UNITYSDK_OFFSET(0x14CEB8F0)
#define CLASS_3_D72E01AB250E10FD__CTOR_OFFSET UNITYSDK_OFFSET(0x14CEB7F0)

inline static constexpr unsigned int Class_3_D72E01AB250E10FD_TypeDefinitionIndex = 52164;

class Class_3_D72E01AB250E10FD : public ::Class_2_9C00C44C10E42328
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_3_D72E01AB250E10FD__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_40D741483CBF207D(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_3_D72E01AB250E10FD_METHOD_3_40D741483CBF207D_OFFSET))(this, a1);
	}
};
