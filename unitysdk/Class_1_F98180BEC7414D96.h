#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_93;
class Class_1_6CFC72D3F035968E;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F98180BEC7414D96_METHOD_1_02E830CFF568F4DC_OFFSET UNITYSDK_OFFSET(0x1E4DFD50)
#define CLASS_1_F98180BEC7414D96_METHOD_1_53F8E7A039DF377D_OFFSET UNITYSDK_OFFSET(0x1E4DF370)
#define CLASS_1_F98180BEC7414D96_METHOD_1_55F60C84B6E8DDCC_OFFSET UNITYSDK_OFFSET(0x1E4DF290)
#define CLASS_1_F98180BEC7414D96_METHOD_1_5DAD6A9DC83C1AC8_OFFSET UNITYSDK_OFFSET(0x1E4DF5B0)
#define CLASS_1_F98180BEC7414D96_METHOD_1_A17E1A057F3CBEB7_OFFSET UNITYSDK_OFFSET(0x1E4DFA10)
#define CLASS_1_F98180BEC7414D96_METHOD_1_E8F76A8C4EFFCC91_OFFSET UNITYSDK_OFFSET(0x1E4DF780)
#define CLASS_1_F98180BEC7414D96_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1E4DF560)
#define CLASS_1_F98180BEC7414D96__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E00E0)

inline static constexpr unsigned int Class_1_F98180BEC7414D96_TypeDefinitionIndex = 29490;

class Class_1_F98180BEC7414D96 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_6CFC72D3F035968E*>* Field_1_0; // 0x10
	::Class_1_6CFC72D3F035968E* Field_1_7; // 0x18
	::System::Collections::Generic::HashSet_1<::Class_1_6CFC72D3F035968E*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_6CFC72D3F035968E*>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F98180BEC7414D96__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_55F60C84B6E8DDCC(::Class_1_6CFC72D3F035968E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CFC72D3F035968E*))((::PBYTE)hIl2Cpp + CLASS_1_F98180BEC7414D96_METHOD_1_55F60C84B6E8DDCC_OFFSET))(this, a1);
	}

	::System::Void Method_1_53F8E7A039DF377D(::Class_1_6CFC72D3F035968E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CFC72D3F035968E*))((::PBYTE)hIl2Cpp + CLASS_1_F98180BEC7414D96_METHOD_1_53F8E7A039DF377D_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_6CFC72D3F035968E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CFC72D3F035968E*))((::PBYTE)hIl2Cpp + CLASS_1_F98180BEC7414D96_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_6CFC72D3F035968E*>* Method_1_5DAD6A9DC83C1AC8(::Struct_2_E614D3B245F96744 a1, ::System::Single a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_6CFC72D3F035968E*>*(*)(::PVOID, ::Struct_2_E614D3B245F96744, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F98180BEC7414D96_METHOD_1_5DAD6A9DC83C1AC8_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_6CFC72D3F035968E*>* Method_1_E8F76A8C4EFFCC91(::Struct_2_E614D3B245F96744 a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_6CFC72D3F035968E*>*(*)(::PVOID, ::Struct_2_E614D3B245F96744, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F98180BEC7414D96_METHOD_1_E8F76A8C4EFFCC91_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_6CFC72D3F035968E*>* Method_1_A17E1A057F3CBEB7(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_6CFC72D3F035968E*>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F98180BEC7414D96_METHOD_1_A17E1A057F3CBEB7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_02E830CFF568F4DC(::Class_0_16E4307DCC419505_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_93*))((::PBYTE)hIl2Cpp + CLASS_1_F98180BEC7414D96_METHOD_1_02E830CFF568F4DC_OFFSET))(this, a1);
	}
};
