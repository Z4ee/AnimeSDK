#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCCF9BCA86B17EFC.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_2.h"

class Class_1_87F855E9737731A7;
class SceneObjectAreaCheckDoEnable;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define CLASS_2_E253B0DBA61C974E_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x12EDB420)
#define CLASS_2_E253B0DBA61C974E_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x12EDA890)
#define CLASS_2_E253B0DBA61C974E_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x12EDB2B0)
#define CLASS_2_E253B0DBA61C974E_METHOD_2_2E833295780559F4_OFFSET UNITYSDK_OFFSET(0x12EDA5F0)
#define CLASS_2_E253B0DBA61C974E_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x12EDA700)
#define CLASS_2_E253B0DBA61C974E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12EDB3E0)
#define CLASS_2_E253B0DBA61C974E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x12EDB770)
#define CLASS_2_E253B0DBA61C974E_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x12EDB7B0)
#define CLASS_2_E253B0DBA61C974E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12EDB350)
#define CLASS_2_E253B0DBA61C974E_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x12EDB240)
#define CLASS_2_E253B0DBA61C974E_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x12EDAC10)
#define CLASS_2_E253B0DBA61C974E_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x12EDAF30)
#define CLASS_2_E253B0DBA61C974E__CTOR_OFFSET UNITYSDK_OFFSET(0x12EDA4D0)

inline static constexpr unsigned int Class_2_E253B0DBA61C974E_TypeDefinitionIndex = 84303;

class Class_2_E253B0DBA61C974E : public ::Class_1_BCCF9BCA86B17EFC
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_0; // 0x38
	::SceneObjectAreaCheckDoEnable* Field_2_2; // 0x40
	::System::Boolean Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_87F855E9737731A7* a1, ::MoleMole::SceneObjectStateWidget* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_2>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87F855E9737731A7*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_2>*))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_ONTRIGGERENTER_OFFSET))(this, a1);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_ONTRIGGEREXIT_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_2E833295780559F4(::MoleMole::SceneObjectStateWidget* a1, ::Class_1_87F855E9737731A7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*, ::Class_1_87F855E9737731A7*))((::PBYTE)hIl2Cpp + CLASS_2_E253B0DBA61C974E_METHOD_2_2E833295780559F4_OFFSET))(this, a1, a2);
	}
};
