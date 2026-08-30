#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA642DEE53091501.h"

class Class_1_3B1EA953A4067E26;
class Class_1_43BD383C98B4C0C5_207;
class Class_1_A92BC063ED2379EB;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8D2F7B93339E0FA2_2_METHOD_2_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x17948D40)
#define CLASS_2_8D2F7B93339E0FA2_2_METHOD_2_84739217890C55A7_OFFSET UNITYSDK_OFFSET(0x17948DF0)
#define CLASS_2_8D2F7B93339E0FA2_2_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x17948DA0)
#define CLASS_2_8D2F7B93339E0FA2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x179491A0)

inline static constexpr unsigned int Class_2_8D2F7B93339E0FA2_2_TypeDefinitionIndex = 77002;

class Class_2_8D2F7B93339E0FA2_2 : public ::Class_1_AA642DEE53091501
{
public:
	::Class_1_3B1EA953A4067E26* FKINCGODJEP; // 0x10
	::Class_1_FB3E7B71A45FEB7C* DBJJLAGHKFE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D2F7B93339E0FA2_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_2_8D2F7B93339E0FA2_2_METHOD_2_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_2_8D2F7B93339E0FA2_2_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_84739217890C55A7(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_207*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_207*&))((::PBYTE)hIl2Cpp + CLASS_2_8D2F7B93339E0FA2_2_METHOD_2_84739217890C55A7_OFFSET))(this, a1, a2, a3, a4);
	}
};
