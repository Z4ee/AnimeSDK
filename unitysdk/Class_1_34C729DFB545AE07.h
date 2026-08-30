#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1282;
class Class_1_43BD383C98B4C0C5_208;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_34C729DFB545AE07_GET__CONTEXTGETTER_OFFSET UNITYSDK_OFFSET(0x1ABA2AA0)
#define CLASS_1_34C729DFB545AE07_GET__SERVICES_OFFSET UNITYSDK_OFFSET(0x1ABA2A70)
#define CLASS_1_34C729DFB545AE07_METHOD_1_3CB89DFF1E9DADF1_OFFSET UNITYSDK_OFFSET(0x1ABA3150)
#define CLASS_1_34C729DFB545AE07_METHOD_1_3E985071875E8379_1_OFFSET UNITYSDK_OFFSET(0x1ABA3910)
#define CLASS_1_34C729DFB545AE07_METHOD_1_3E985071875E8379_OFFSET UNITYSDK_OFFSET(0x1ABA3720)
#define CLASS_1_34C729DFB545AE07_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x1ABA2A80)
#define CLASS_1_34C729DFB545AE07_METHOD_1_87FF5AC074B4E436_OFFSET UNITYSDK_OFFSET(0x1ABA3B00)
#define CLASS_1_34C729DFB545AE07_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x1ABA2AB0)
#define CLASS_1_34C729DFB545AE07_METHOD_1_C0AD97BD195C9147_OFFSET UNITYSDK_OFFSET(0x1ABA2B20)
#define CLASS_1_34C729DFB545AE07__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA2B10)

inline static constexpr unsigned int Class_1_34C729DFB545AE07_TypeDefinitionIndex = 77099;

class Class_1_34C729DFB545AE07 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_1282*>* PBPIIBFFNCO; // 0x10
	::Class_3_D637C1E17FCBBFB0* __Services_k__BackingField; // 0x18
	::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>* __ContextGetter_k__BackingField; // 0x20

	::System::Void _ctor(::Class_3_D637C1E17FCBBFB0* a1, ::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*, ::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>*))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_3_D637C1E17FCBBFB0* get__Services()
	{
		return ((::Class_3_D637C1E17FCBBFB0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_GET__SERVICES_OFFSET))(this);
	}

	::Class_1_A92BC063ED2379EB* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_A92BC063ED2379EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>* get__ContextGetter()
	{
		return ((::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_GET__CONTEXTGETTER_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_208* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_43BD383C98B4C0C5_208*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_C0AD97BD195C9147(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_C0AD97BD195C9147_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* Method_1_3E985071875E8379()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_3E985071875E8379_OFFSET))(this);
	}

	::Class_2_B66C1067C0468FBB* Method_1_3E985071875E8379_1()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_3E985071875E8379_1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_87FF5AC074B4E436(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_87FF5AC074B4E436_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1282* Method_1_3CB89DFF1E9DADF1(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1282*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_34C729DFB545AE07_METHOD_1_3CB89DFF1E9DADF1_OFFSET))(this, a1);
	}
};
