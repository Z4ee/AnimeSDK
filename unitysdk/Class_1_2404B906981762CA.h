#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2404B906981762CA_ProfileStackDirtyState.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2404B906981762CA_METHOD_1_0E1548146BE50DDB_OFFSET UNITYSDK_OFFSET(0xE2B52E0)
#define CLASS_1_2404B906981762CA_METHOD_1_110F44F90EF10806_OFFSET UNITYSDK_OFFSET(0xE2B75D0)
#define CLASS_1_2404B906981762CA_METHOD_1_2A8D29F0A109DF51_OFFSET UNITYSDK_OFFSET(0xE2B6F70)
#define CLASS_1_2404B906981762CA_METHOD_1_4A649E4955D6152B_OFFSET UNITYSDK_OFFSET(0xE2B5710)
#define CLASS_1_2404B906981762CA_METHOD_1_4D868FE9B7880595_OFFSET UNITYSDK_OFFSET(0xE2B7020)
#define CLASS_1_2404B906981762CA_METHOD_1_6B155FFA6140CBA2_OFFSET UNITYSDK_OFFSET(0xE2B59C0)
#define CLASS_1_2404B906981762CA_METHOD_1_70F88F4E712B5238_OFFSET UNITYSDK_OFFSET(0xE2B7290)
#define CLASS_1_2404B906981762CA_METHOD_1_7D8D3B227629F45A_OFFSET UNITYSDK_OFFSET(0xE2B4900)
#define CLASS_1_2404B906981762CA_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xE2B6FD0)
#define CLASS_1_2404B906981762CA_METHOD_1_A5AA680309664DCB_OFFSET UNITYSDK_OFFSET(0xE2B4F30)
#define CLASS_1_2404B906981762CA_METHOD_1_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0xE2B4150)
#define CLASS_1_2404B906981762CA_METHOD_1_D027764A12ED54F3_OFFSET UNITYSDK_OFFSET(0xE2B5900)
#define CLASS_1_2404B906981762CA_METHOD_1_EA46278A47855700_OFFSET UNITYSDK_OFFSET(0xE2B7110)
#define CLASS_1_2404B906981762CA_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xE2B4790)
#define CLASS_1_2404B906981762CA__CTOR_OFFSET UNITYSDK_OFFSET(0xE2B3FE0)

inline static constexpr unsigned int Class_1_2404B906981762CA_TypeDefinitionIndex = 50015;

class Class_1_2404B906981762CA : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_LCDCHEKNEFK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2404B906981762CA_TypeDefinitionIndex)->GetStaticField(0x15550);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EnviromentSystem::EnviromentProfile*>* HINAMCABAED; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*>* KPEMDEMFAOJ; // 0x18
	::EnviromentSystem::EnviromentProfile* LMMDKKMKGEP; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* OHEDMDLEPHI; // 0x28
	::Class_1_2404B906981762CA_ProfileStackDirtyState IJCDEINGADN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_7D8D3B227629F45A(::EnviromentSystem::EnviromentProfile* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_7D8D3B227629F45A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5AA680309664DCB(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_A5AA680309664DCB_OFFSET))(this, a1);
	}

	::RPG::GameCore::EnviromentControlPriority Method_1_4A649E4955D6152B()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_4A649E4955D6152B_OFFSET))(this);
	}

	::System::Boolean Method_1_D027764A12ED54F3(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_D027764A12ED54F3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6B155FFA6140CBA2(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_6B155FFA6140CBA2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A8D29F0A109DF51(::EnviromentSystem::EnviromentProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_2A8D29F0A109DF51_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::EnviromentSystem::EnviromentProfile* Method_1_4D868FE9B7880595()
	{
		return ((::EnviromentSystem::EnviromentProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_4D868FE9B7880595_OFFSET))(this);
	}

	::System::Void Method_1_0E1548146BE50DDB(::EnviromentSystem::EnviroProperty* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_0E1548146BE50DDB_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1_Enumerator<::EnviromentSystem::EnviroProperty*> Method_1_EA46278A47855700(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1_Enumerator<::EnviromentSystem::EnviroProperty*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_EA46278A47855700_OFFSET))(this, a1);
	}

	::System::Void Method_1_70F88F4E712B5238(::EnviromentSystem::EnviroProperty* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_70F88F4E712B5238_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_110F44F90EF10806(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_2404B906981762CA_METHOD_1_110F44F90EF10806_OFFSET))(this, a1);
	}
};
