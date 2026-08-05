#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DFF9931974CDE28.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/Struct_2_17E0E0442218CD79.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_379;
class Class_0_16E4307DCC419505_434;
class Class_1_1C46DBAB65E43874;
class Class_1_F0F3CACCE9E73DFC_Class_1_50976B27DA2231DE;
class Class_2_ED6948B5924B9BC1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_0E02C4B6B05D1D1A_OFFSET UNITYSDK_OFFSET(0x13983940)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_1C763C6178E05F9A_OFFSET UNITYSDK_OFFSET(0x139840A0)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_2DA90F020EB3A373_OFFSET UNITYSDK_OFFSET(0x13984260)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_534E75C4D9B91EA3_OFFSET UNITYSDK_OFFSET(0x139830D0)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_54CD0459B58F15EE_OFFSET UNITYSDK_OFFSET(0x13982800)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_8C995E085DD61EF0_OFFSET UNITYSDK_OFFSET(0x139843C0)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_B5AA046F0DE7E2FC_OFFSET UNITYSDK_OFFSET(0x13983D60)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_C51B0CF2870181C4_OFFSET UNITYSDK_OFFSET(0x13982D90)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_C635D3A29B8AC453_OFFSET UNITYSDK_OFFSET(0x139832B0)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x139826C0)
#define CLASS_1_F0F3CACCE9E73DFC_METHOD_1_DCF69FCDBDC9EE54_OFFSET UNITYSDK_OFFSET(0x13982B90)
#define CLASS_1_F0F3CACCE9E73DFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13981D20)
#define CLASS_1_F0F3CACCE9E73DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x139824D0)

inline static constexpr unsigned int Class_1_F0F3CACCE9E73DFC_TypeDefinitionIndex = 58322;

class Class_1_F0F3CACCE9E73DFC : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_1_F0F3CACCE9E73DFC_Class_1_50976B27DA2231DE*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Class_1_F0F3CACCE9E73DFC_Class_1_50976B27DA2231DE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0F3CACCE9E73DFC_TypeDefinitionIndex)->GetStaticField(0x45C10);
	}
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::RenderDataHandle, ::Struct_2_6CC2897B74C41026_1>* Field_1_6; // 0x10
	::System::Collections::Generic::HashSet_1<::Enum_3_3DFF9931974CDE28>* Field_1_7; // 0x18
	::System::Action* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_3DFF9931974CDE28, ::Class_0_16E4307DCC419505_434*>* Field_1_5; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_54CD0459B58F15EE(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_379*>* a1, ::Struct_2_17E0E0442218CD79 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_379*>*, ::Struct_2_17E0E0442218CD79))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_54CD0459B58F15EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C51B0CF2870181C4(::Class_2_ED6948B5924B9BC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_ED6948B5924B9BC1*))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_C51B0CF2870181C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_534E75C4D9B91EA3(::MoleMole::HollowChessboard::RenderDataHandle a1, ::Struct_2_17E0E0442218CD79 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::Struct_2_17E0E0442218CD79))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_534E75C4D9B91EA3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C635D3A29B8AC453(::Struct_2_17E0E0442218CD79& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_17E0E0442218CD79&))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_C635D3A29B8AC453_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5AA046F0DE7E2FC(::Enum_3_3DFF9931974CDE28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3DFF9931974CDE28))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_B5AA046F0DE7E2FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C763C6178E05F9A(::Enum_3_3DFF9931974CDE28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3DFF9931974CDE28))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_1C763C6178E05F9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9BF9B27FAC3AAD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_D9BF9B27FAC3AAD2_OFFSET))(this);
	}

	::System::Void Method_1_2DA90F020EB3A373(::Class_0_16E4307DCC419505_379* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379*))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_2DA90F020EB3A373_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCF69FCDBDC9EE54(::MoleMole::HollowChessboard::RenderDataHandle a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_DCF69FCDBDC9EE54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C995E085DD61EF0(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* a1, ::Class_1_1C46DBAB65E43874* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*, ::Class_1_1C46DBAB65E43874*))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_8C995E085DD61EF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0E02C4B6B05D1D1A(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_379*>* a1, ::Struct_2_17E0E0442218CD79 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_379*>*, ::Struct_2_17E0E0442218CD79))((::PBYTE)hIl2Cpp + CLASS_1_F0F3CACCE9E73DFC_METHOD_1_0E02C4B6B05D1D1A_OFFSET))(this, a1, a2);
	}
};
