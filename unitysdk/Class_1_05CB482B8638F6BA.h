#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_37BCC354BD0C729A;
class Class_1_702B64C88BBE9F68;
class Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D;
class Class_1_EDF7E2913A3DD535;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_05CB482B8638F6BA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x12B97700)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_3B9F7B4CBEBEAD74_OFFSET UNITYSDK_OFFSET(0x12B978F0)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x12B97710)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_8E0F5833C4E97BF7_OFFSET UNITYSDK_OFFSET(0x12B97E50)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x12B98770)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_C983A6882B884491_OFFSET UNITYSDK_OFFSET(0x12B97720)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_D81D30E8E4EF3D54_1_OFFSET UNITYSDK_OFFSET(0x12B97D20)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_D81D30E8E4EF3D54_OFFSET UNITYSDK_OFFSET(0x12B97C10)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_F6603D530AD23037_OFFSET UNITYSDK_OFFSET(0x12B97AD0)
#define CLASS_1_05CB482B8638F6BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B974D0)
#define CLASS_1_05CB482B8638F6BA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B97520)

inline static constexpr unsigned int Class_1_05CB482B8638F6BA_TypeDefinitionIndex = 42848;

class Class_1_05CB482B8638F6BA : public ::System::Object
{
public:
	static ::Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D** StaticGet_Field_1_3()
	{
		return (::Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05CB482B8638F6BA_TypeDefinitionIndex)->GetStaticField(0x3D490);
	}
	::Class_1_37BCC354BD0C729A* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_702B64C88BBE9F68*>* Field_1_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA__CTOR_OFFSET))(this);
	}

	::Class_1_37BCC354BD0C729A* Method_1_24748FC20F375725()
	{
		return ((::Class_1_37BCC354BD0C729A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_37BCC354BD0C729A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37BCC354BD0C729A*))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C983A6882B884491(::MoleMole::HollowChessboard::RenderDataHandle a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_C983A6882B884491_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6603D530AD23037(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_F6603D530AD23037_OFFSET))(this, a1);
	}

	::Class_1_702B64C88BBE9F68* Method_1_D81D30E8E4EF3D54(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_702B64C88BBE9F68*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_D81D30E8E4EF3D54_OFFSET))(this, a1);
	}

	::Class_1_702B64C88BBE9F68* Method_1_D81D30E8E4EF3D54_1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_702B64C88BBE9F68*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_D81D30E8E4EF3D54_1_OFFSET))(this, a1);
	}

	::Class_1_702B64C88BBE9F68* Method_1_8E0F5833C4E97BF7(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_702B64C88BBE9F68* a2, ::Class_1_EDF7E2913A3DD535* a3)
	{
		return ((::Class_1_702B64C88BBE9F68*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_702B64C88BBE9F68*, ::Class_1_EDF7E2913A3DD535*))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_8E0F5833C4E97BF7_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_702B64C88BBE9F68* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_702B64C88BBE9F68*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::Class_1_702B64C88BBE9F68* Method_1_3B9F7B4CBEBEAD74(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_702B64C88BBE9F68*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_3B9F7B4CBEBEAD74_OFFSET))(this, a1);
	}
};
