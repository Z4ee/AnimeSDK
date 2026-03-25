#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F79C408792F4D54.h"

class Class_1_2CE61CB9B2E57F36;
class Class_1_3B1EA953A4067E26;
class Class_1_43BD383C98B4C0C5_170;
class Class_1_8E042314AFF884FB_16;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_2_6AA7CA7493367EF4;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_39EFD87723FBAF55_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x108D1A50)
#define CLASS_2_39EFD87723FBAF55_METHOD_2_1C32EDBFD371B1AB_OFFSET UNITYSDK_OFFSET(0x108D1DF0)
#define CLASS_2_39EFD87723FBAF55_METHOD_2_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x108D19E0)
#define CLASS_2_39EFD87723FBAF55_METHOD_2_BA4CE27271C37FA3_OFFSET UNITYSDK_OFFSET(0x108D1AB0)
#define CLASS_2_39EFD87723FBAF55__CTOR_OFFSET UNITYSDK_OFFSET(0x108D23B0)

inline static constexpr unsigned int Class_2_39EFD87723FBAF55_TypeDefinitionIndex = 63023;

class Class_2_39EFD87723FBAF55 : public ::Class_1_4F79C408792F4D54
{
public:
	::Class_1_2CE61CB9B2E57F36* Field_2_0; // 0x10
	::Class_1_8E042314AFF884FB_16* Field_2_1; // 0x18
	::Class_2_6AA7CA7493367EF4* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39EFD87723FBAF55__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_2_39EFD87723FBAF55_METHOD_2_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_2_39EFD87723FBAF55_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA4CE27271C37FA3(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_170*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_170*&))((::PBYTE)hIl2Cpp + CLASS_2_39EFD87723FBAF55_METHOD_2_BA4CE27271C37FA3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1C32EDBFD371B1AB(::Class_1_C4FD36003027AC99* a1, ::Class_2_49CAB3DE74280C58* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::Class_2_49CAB3DE74280C58*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_39EFD87723FBAF55_METHOD_2_1C32EDBFD371B1AB_OFFSET))(this, a1, a2, a3);
	}
};
