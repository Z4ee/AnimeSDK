#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_3B1EA953A4067E26;
class Class_1_C4FD36003027AC99;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_49CAB3DE74280C58;
class Class_2_6AA7CA7493367EF4;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_91C87E56ED8667C4_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x123B5E30)
#define CLASS_3_91C87E56ED8667C4_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x123B5DD0)
#define CLASS_3_91C87E56ED8667C4_METHOD_3_C7278F106790159B_OFFSET UNITYSDK_OFFSET(0x123B63D0)
#define CLASS_3_91C87E56ED8667C4_METHOD_3_F33A62D8DFBBB67E_1_OFFSET UNITYSDK_OFFSET(0x123B6120)
#define CLASS_3_91C87E56ED8667C4_METHOD_3_F33A62D8DFBBB67E_OFFSET UNITYSDK_OFFSET(0x123B5E90)
#define CLASS_3_91C87E56ED8667C4__CTOR_OFFSET UNITYSDK_OFFSET(0x123B63C0)

inline static constexpr unsigned int Class_3_91C87E56ED8667C4_TypeDefinitionIndex = 71061;

class Class_3_91C87E56ED8667C4 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_1_FB3E7B71A45FEB7C* Field_3_1; // 0x10
	::Class_2_6AA7CA7493367EF4* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C87E56ED8667C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_91C87E56ED8667C4_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_3_91C87E56ED8667C4_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F33A62D8DFBBB67E(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_91C87E56ED8667C4_METHOD_3_F33A62D8DFBBB67E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_F33A62D8DFBBB67E_1(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_91C87E56ED8667C4_METHOD_3_F33A62D8DFBBB67E_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C7278F106790159B(::Class_1_C4FD36003027AC99* P0, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* P1, ::RPG::GameCore::ChimeraDuelEffectConfig* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_91C87E56ED8667C4_METHOD_3_C7278F106790159B_OFFSET))(this, P0, P1, P2);
	}
};
