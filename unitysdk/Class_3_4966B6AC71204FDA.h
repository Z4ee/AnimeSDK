#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"
#include "unitysdk/Enum_3_B3DC68436059CEA0.h"

class Class_3_5DD3D37B5227B106;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class VESequenceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4966B6AC71204FDA_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13D717C0)
#define CLASS_3_4966B6AC71204FDA_METHOD_3_C4FDF5DB46830B8A_OFFSET UNITYSDK_OFFSET(0x13D71360)
#define CLASS_3_4966B6AC71204FDA_METHOD_3_EDFD49C942C75D6C_1_OFFSET UNITYSDK_OFFSET(0x13D711F0)
#define CLASS_3_4966B6AC71204FDA_METHOD_3_EDFD49C942C75D6C_2_OFFSET UNITYSDK_OFFSET(0x13D715A0)
#define CLASS_3_4966B6AC71204FDA_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x13D713D0)
#define CLASS_3_4966B6AC71204FDA_METHOD_3_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x13D71160)
#define CLASS_3_4966B6AC71204FDA__CTOR_OFFSET UNITYSDK_OFFSET(0x13D70D00)

inline static constexpr unsigned int Class_3_4966B6AC71204FDA_TypeDefinitionIndex = 66777;

class Class_3_4966B6AC71204FDA : public ::Class_2_AB4261DB06E3A6BD
{
public:
	::Class_2_AB4261DB06E3A6BD* Field_3_5; // 0x40
	::Class_5_A6F8D19602712D95* Field_3_4; // 0x48
	::System::String* Field_3_11; // 0x50
	::System::Collections::Generic::List_1<::Class_3_5DD3D37B5227B106*>* Field_3_7; // 0x58
	::Enum_3_B3DC68436059CEA0 Field_3_0; // 0x60
	::System::Int32 Field_3_6; // 0x64

	::System::Void _ctor(::Class_5_A6F8D19602712D95* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::VESequenceInfo*>* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Collections::Generic::List_1<::MoleMole::Config::VESequenceInfo*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4966B6AC71204FDA__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4966B6AC71204FDA_METHOD_3_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_3_C4FDF5DB46830B8A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4966B6AC71204FDA_METHOD_3_C4FDF5DB46830B8A_OFFSET))(this, a1);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4966B6AC71204FDA_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4966B6AC71204FDA_METHOD_3_EDFD49C942C75D6C_1_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4966B6AC71204FDA_METHOD_3_EDFD49C942C75D6C_2_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4966B6AC71204FDA_METHOD_3_1290EA767C459179_OFFSET))(this);
	}
};
