#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19DB14C0C5CFE108;
class Class_1_FB0633E85BD6CF8E;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB466CD0)
#define CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS13_0___CHECKHAVEEQUIPMENTCONFLICT_B__0_OFFSET UNITYSDK_OFFSET(0xB4675E0)

inline static constexpr unsigned int Class_1_19DB14C0C5CFE108___c__DisplayClass13_0_TypeDefinitionIndex = 80183;

class Class_1_19DB14C0C5CFE108___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_19DB14C0C5CFE108* __4__this; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* lineupAvatarIDs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CheckHaveEquipmentConflict_b__0(::Class_1_FB0633E85BD6CF8E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E*))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS13_0___CHECKHAVEEQUIPMENTCONFLICT_B__0_OFFSET))(this, a1);
	}
};
