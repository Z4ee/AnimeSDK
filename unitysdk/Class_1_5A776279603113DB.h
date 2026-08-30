#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A776279603113DB__CTOR_OFFSET UNITYSDK_OFFSET(0x180C4810)

inline static constexpr unsigned int Class_1_5A776279603113DB_TypeDefinitionIndex = 79226;

class Class_1_5A776279603113DB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D294488719556168*>* HKMIJJBMKDJ; // 0x10
	::Class_2_7EA45D2647F35CDD* ELIMDKMMGBO; // 0x18

	::System::Void _ctor(::Class_2_7EA45D2647F35CDD* a1, ::System::Collections::Generic::List_1<::Class_1_D294488719556168*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::System::Collections::Generic::List_1<::Class_1_D294488719556168*>*))((::PBYTE)hIl2Cpp + CLASS_1_5A776279603113DB__CTOR_OFFSET))(this, a1, a2);
	}
};
