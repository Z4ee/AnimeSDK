#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1056;
class Class_0_16E4307DCC419505_1057;
class Class_1_87AA5DF0D42C0A0C;
class Class_1_BE0E97EFC15B9DBB;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A88EB0265EB5058F_METHOD_1_319F77ED714C7B1B_OFFSET UNITYSDK_OFFSET(0x1119DC30)
#define CLASS_1_A88EB0265EB5058F_METHOD_1_7C0C72C9272DA9BC_OFFSET UNITYSDK_OFFSET(0x1119DF80)
#define CLASS_1_A88EB0265EB5058F_METHOD_1_B32523ABACDCDB7F_OFFSET UNITYSDK_OFFSET(0x1119DBA0)
#define CLASS_1_A88EB0265EB5058F_METHOD_1_BB15CE8AD77D8A79_OFFSET UNITYSDK_OFFSET(0x1119F9A0)
#define CLASS_1_A88EB0265EB5058F_METHOD_1_BB7A1049F84E8127_OFFSET UNITYSDK_OFFSET(0x1119DB20)
#define CLASS_1_A88EB0265EB5058F_METHOD_1_C3F920468FC0D410_OFFSET UNITYSDK_OFFSET(0x1119E8C0)
#define CLASS_1_A88EB0265EB5058F__CTOR_OFFSET UNITYSDK_OFFSET(0x1119DB90)

inline static constexpr unsigned int Class_1_A88EB0265EB5058F_TypeDefinitionIndex = 68820;

class Class_1_A88EB0265EB5058F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A88EB0265EB5058F__CTOR_OFFSET))(this);
	}

	static ::Class_1_A88EB0265EB5058F* Method_1_BB7A1049F84E8127()
	{
		return ((::Class_1_A88EB0265EB5058F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A88EB0265EB5058F_METHOD_1_BB7A1049F84E8127_OFFSET))();
	}

	::Class_1_87AA5DF0D42C0A0C* Method_1_B32523ABACDCDB7F(::Class_1_BE0E97EFC15B9DBB* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
	{
		return ((::Class_1_87AA5DF0D42C0A0C*(*)(::PVOID, ::Class_1_BE0E97EFC15B9DBB*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A88EB0265EB5058F_METHOD_1_B32523ABACDCDB7F_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_87AA5DF0D42C0A0C* Method_1_319F77ED714C7B1B(::Class_1_BE0E97EFC15B9DBB* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
	{
		return ((::Class_1_87AA5DF0D42C0A0C*(*)(::PVOID, ::Class_1_BE0E97EFC15B9DBB*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A88EB0265EB5058F_METHOD_1_319F77ED714C7B1B_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::Class_0_16E4307DCC419505_1056*, ::Class_0_16E4307DCC419505_1057*> Method_1_7C0C72C9272DA9BC(::Class_1_BE0E97EFC15B9DBB* a1, ::RPG::Client::NavMap::ITrackPointInfo* a2)
	{
		return ((::System::ValueTuple_2<::Class_0_16E4307DCC419505_1056*, ::Class_0_16E4307DCC419505_1057*>(*)(::PVOID, ::Class_1_BE0E97EFC15B9DBB*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A88EB0265EB5058F_METHOD_1_7C0C72C9272DA9BC_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* Method_1_C3F920468FC0D410(::Class_1_BE0E97EFC15B9DBB* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::Class_0_16E4307DCC419505_1057* a3, ::Class_0_16E4307DCC419505_1056* a4)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*(*)(::Class_1_BE0E97EFC15B9DBB*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::Class_0_16E4307DCC419505_1057*, ::Class_0_16E4307DCC419505_1056*))((::PBYTE)hIl2Cpp + CLASS_1_A88EB0265EB5058F_METHOD_1_C3F920468FC0D410_OFFSET))(a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_1056* Method_1_BB15CE8AD77D8A79(::Class_1_BE0E97EFC15B9DBB* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_1056*(*)(::PVOID, ::Class_1_BE0E97EFC15B9DBB*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_A88EB0265EB5058F_METHOD_1_BB15CE8AD77D8A79_OFFSET))(this, a1, a2);
	}
};
