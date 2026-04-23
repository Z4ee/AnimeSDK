#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F79C408792F4D54.h"

class Class_1_2CE61CB9B2E57F36;
class Class_1_43BD383C98B4C0C5_176;
class Class_1_5582DFD38EE429E6;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_89D1CDC33902C8B6_METHOD_2_3210A5BB7D3D17EC_OFFSET UNITYSDK_OFFSET(0x997A110)
#define CLASS_2_89D1CDC33902C8B6_METHOD_2_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x99799D0)
#define CLASS_2_89D1CDC33902C8B6_METHOD_2_B6B43818209B48CE_OFFSET UNITYSDK_OFFSET(0x9979A40)
#define CLASS_2_89D1CDC33902C8B6__CTOR_OFFSET UNITYSDK_OFFSET(0x997A270)

inline static constexpr unsigned int Class_2_89D1CDC33902C8B6_TypeDefinitionIndex = 71037;

class Class_2_89D1CDC33902C8B6 : public ::Class_1_4F79C408792F4D54
{
public:
	::Class_1_2CE61CB9B2E57F36* Field_2_1; // 0x10
	::Class_1_5582DFD38EE429E6* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89D1CDC33902C8B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_2_89D1CDC33902C8B6_METHOD_2_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B6B43818209B48CE(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_176*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_176*&))((::PBYTE)hIl2Cpp + CLASS_2_89D1CDC33902C8B6_METHOD_2_B6B43818209B48CE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_3210A5BB7D3D17EC(::Class_1_C4FD36003027AC99* a1, ::Class_2_49CAB3DE74280C58* a2, ::RPG::GameCore::ChimeraDuelBuffConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelBuffConfig*))((::PBYTE)hIl2Cpp + CLASS_2_89D1CDC33902C8B6_METHOD_2_3210A5BB7D3D17EC_OFFSET))(this, a1, a2, a3);
	}
};
