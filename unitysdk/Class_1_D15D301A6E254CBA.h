#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D15D301A6E254CBA_Struct_2_1F08FE7D76D71966.h"
#include "unitysdk/Class_1_D15D301A6E254CBA_Struct_2_BBD456EBC9087BC2_6.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_19.h"
#include "unitysdk/Enum_3_4623238576979FE3.h"
#include "unitysdk/MoleMole/ChessboardPathLink.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_395B739A1AC58399_1.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/Struct_2_FD11E06FCEBA5113.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_3_493953025FA316DA;
class Class_4_AC6D98911872E0CE;
class Class_4_FE723876298B9E96;
class Class_5_A6F8D19602712D95;
class Class_5_DCFF91E03A93C03C;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_D15D301A6E254CBA_METHOD_1_0C8B8FAF63865CE8_OFFSET UNITYSDK_OFFSET(0x1906FF90)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_16B71E47134153B8_OFFSET UNITYSDK_OFFSET(0x19072940)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_2813CDA492351A36_OFFSET UNITYSDK_OFFSET(0x19070D00)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_33A1306ED24F5015_OFFSET UNITYSDK_OFFSET(0x19071CD0)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_3A8D1629C3F3BB2E_OFFSET UNITYSDK_OFFSET(0x19073970)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_43ADAE1009ACC52B_OFFSET UNITYSDK_OFFSET(0x19074140)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_4D956729FAC8DEE8_OFFSET UNITYSDK_OFFSET(0x19073320)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_55F044CF9BBA8320_OFFSET UNITYSDK_OFFSET(0x19070190)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_5D0125586A000B11_OFFSET UNITYSDK_OFFSET(0x19073980)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_6BF4E07B88C4ECC3_1_OFFSET UNITYSDK_OFFSET(0x19071F10)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_6BF4E07B88C4ECC3_2_OFFSET UNITYSDK_OFFSET(0x19072D10)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_6BF4E07B88C4ECC3_3_OFFSET UNITYSDK_OFFSET(0x19072DB0)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_6BF4E07B88C4ECC3_OFFSET UNITYSDK_OFFSET(0x190712D0)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_6DE87FA9CBB66112_1_OFFSET UNITYSDK_OFFSET(0x19070A40)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_6DE87FA9CBB66112_2_OFFSET UNITYSDK_OFFSET(0x19070670)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_6DE87FA9CBB66112_3_OFFSET UNITYSDK_OFFSET(0x19070860)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_6DE87FA9CBB66112_OFFSET UNITYSDK_OFFSET(0x19070480)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_732BAD6F52708D4E_OFFSET UNITYSDK_OFFSET(0x19071910)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_790087961F810F76_OFFSET UNITYSDK_OFFSET(0x19071090)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_7F59F0DF6E8BA48B_OFFSET UNITYSDK_OFFSET(0x19073200)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_852B6406D0678729_OFFSET UNITYSDK_OFFSET(0x190702C0)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_89C0155391FF9467_OFFSET UNITYSDK_OFFSET(0x19073960)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_8F9F10DF9CDADDAB_OFFSET UNITYSDK_OFFSET(0x19072020)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x19070C90)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_95780ED94B90ED36_2_OFFSET UNITYSDK_OFFSET(0x19071FB0)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_95780ED94B90ED36_3_OFFSET UNITYSDK_OFFSET(0x190728D0)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x19070C20)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_975252588CAA701B_OFFSET UNITYSDK_OFFSET(0x1906F740)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_97966926D091E2DD_OFFSET UNITYSDK_OFFSET(0x19070E00)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_A2CF9A27409FEEC9_OFFSET UNITYSDK_OFFSET(0x19073710)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_B45D2D5D592E6621_OFFSET UNITYSDK_OFFSET(0x19072D00)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_DC7EC65F06E665E0_OFFSET UNITYSDK_OFFSET(0x19072E50)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_F6E6E622B53160EC_OFFSET UNITYSDK_OFFSET(0x19072820)
#define CLASS_1_D15D301A6E254CBA_METHOD_1_FEC484052B4643C3_OFFSET UNITYSDK_OFFSET(0x19071370)
#define CLASS_1_D15D301A6E254CBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1906F730)
#define CLASS_1_D15D301A6E254CBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1906F6A0)

inline static constexpr unsigned int Class_1_D15D301A6E254CBA_TypeDefinitionIndex = 45395;

class Class_1_D15D301A6E254CBA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15D301A6E254CBA_TypeDefinitionIndex)->GetStaticField(0xE2B0);
	}
	::Class_3_493953025FA316DA* Field_1_4; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_5; // 0x18
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_6; // 0x20
	::Il2CppArray<::UnityEngine::Plane>* Field_1_11; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_7; // 0x30

	::System::Void _ctor(::Class_3_493953025FA316DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_493953025FA316DA*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA__CCTOR_OFFSET))();
	}

	static ::Enum_3_4623238576979FE3 Method_1_975252588CAA701B(::Class_4_AC6D98911872E0CE* a1, ::Class_4_AC6D98911872E0CE* a2, ::System::Int32 a3)
	{
		return ((::Enum_3_4623238576979FE3(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_AC6D98911872E0CE*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_975252588CAA701B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_0C8B8FAF63865CE8(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2, ::Enum_3_4608E37A1B3D374A_19 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*, ::Enum_3_4608E37A1B3D374A_19, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_0C8B8FAF63865CE8_OFFSET))(a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_852B6406D0678729()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_852B6406D0678729_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_5_A6F8D19602712D95* Method_1_6DE87FA9CBB66112()
	{
		return ((::Class_5_A6F8D19602712D95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_6DE87FA9CBB66112_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	static ::Struct_2_3BFB14B0511B64BC Method_1_2813CDA492351A36(::Class_4_AC6D98911872E0CE* a1, ::Class_4_AC6D98911872E0CE* a2)
	{
		return ((::Struct_2_3BFB14B0511B64BC(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_2813CDA492351A36_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::HollowCell Method_1_97966926D091E2DD(::MoleMole::HollowChessboard::HollowCell a1, ::Class_5_DCFF91E03A93C03C* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::Struct_2_A1A45D8655270887, ::Class_1_0AEBFEBDADDA07AC*>* a3)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_5_DCFF91E03A93C03C*, ::System::Collections::Generic::IReadOnlyDictionary_2<::Struct_2_A1A45D8655270887, ::Class_1_0AEBFEBDADDA07AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_97966926D091E2DD_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_6BF4E07B88C4ECC3(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_6BF4E07B88C4ECC3_OFFSET))(a1, a2);
	}

	::Class_5_A6F8D19602712D95* Method_1_6DE87FA9CBB66112_1()
	{
		return ((::Class_5_A6F8D19602712D95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_6DE87FA9CBB66112_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FEC484052B4643C3(::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_FD11E06FCEBA5113> a1, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_FD11E06FCEBA5113> a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_FD11E06FCEBA5113>, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_FD11E06FCEBA5113>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_FEC484052B4643C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_732BAD6F52708D4E(::UnityEngine::Camera* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_732BAD6F52708D4E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_6BF4E07B88C4ECC3_1(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_6BF4E07B88C4ECC3_1_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_95780ED94B90ED36_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_95780ED94B90ED36_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_8F9F10DF9CDADDAB(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_8F9F10DF9CDADDAB_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_55F044CF9BBA8320(::Class_4_FE723876298B9E96* a1, ::Class_5_A6F8D19602712D95* a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::Class_4_FE723876298B9E96*, ::Class_5_A6F8D19602712D95*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_55F044CF9BBA8320_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_16B71E47134153B8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_16B71E47134153B8_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_6BF4E07B88C4ECC3_2(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_6BF4E07B88C4ECC3_2_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_95780ED94B90ED36_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_95780ED94B90ED36_3_OFFSET))(this);
	}

	::System::Int32 Method_1_F6E6E622B53160EC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_F6E6E622B53160EC_OFFSET))(this);
	}

	static ::System::Boolean Method_1_6BF4E07B88C4ECC3_3(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_6BF4E07B88C4ECC3_3_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_1_DC7EC65F06E665E0(::Class_5_A6F8D19602712D95* a1, ::Class_5_A6F8D19602712D95* a2, ::Class_5_A6F8D19602712D95* a3, ::Class_5_A6F8D19602712D95* a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::Class_5_A6F8D19602712D95*, ::Class_5_A6F8D19602712D95*, ::Class_5_A6F8D19602712D95*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_DC7EC65F06E665E0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_7F59F0DF6E8BA48B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_7F59F0DF6E8BA48B_OFFSET))(this);
	}

	static ::System::Boolean Method_1_B45D2D5D592E6621(::System::Int32 a1, ::Class_1_D15D301A6E254CBA_Struct_2_BBD456EBC9087BC2_6& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Class_1_D15D301A6E254CBA_Struct_2_BBD456EBC9087BC2_6&))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_B45D2D5D592E6621_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_1_4D956729FAC8DEE8(::MoleMole::HollowChessboard::HollowCell a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_4D956729FAC8DEE8_OFFSET))(this, a1, a2);
	}

	static ::MoleMole::ChessboardPathLink Method_1_A2CF9A27409FEEC9(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::MoleMole::ChessboardPathLink(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_A2CF9A27409FEEC9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_790087961F810F76(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_D15D301A6E254CBA_Struct_2_1F08FE7D76D71966& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_1_D15D301A6E254CBA_Struct_2_1F08FE7D76D71966&))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_790087961F810F76_OFFSET))(a1, a2);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_1_89C0155391FF9467()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_89C0155391FF9467_OFFSET))(this);
	}

	::System::Void Method_1_3A8D1629C3F3BB2E(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_3A8D1629C3F3BB2E_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_5D0125586A000B11(::Struct_2_395B739A1AC58399_1 a1, ::Il2CppArray<::UnityEngine::Vector3>* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_395B739A1AC58399_1, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_5D0125586A000B11_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_43ADAE1009ACC52B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_43ADAE1009ACC52B_OFFSET))(a1, a2, a3, a4, a5);
	}

	::Class_5_A6F8D19602712D95* Method_1_6DE87FA9CBB66112_2()
	{
		return ((::Class_5_A6F8D19602712D95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_6DE87FA9CBB66112_2_OFFSET))(this);
	}

	static ::System::Boolean Method_1_33A1306ED24F5015(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_33A1306ED24F5015_OFFSET))(a1, a2, a3, a4, a5);
	}

	::Class_5_A6F8D19602712D95* Method_1_6DE87FA9CBB66112_3()
	{
		return ((::Class_5_A6F8D19602712D95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D301A6E254CBA_METHOD_1_6DE87FA9CBB66112_3_OFFSET))(this);
	}
};
