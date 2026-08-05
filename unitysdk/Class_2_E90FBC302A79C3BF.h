#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2A3859B4230FECE9.h"
#include "unitysdk/Enum_3_1003E4A6E5149B9E.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"

class Class_1_BEF5F5E810036AF4;
class Class_1_BEF5F5E810036AF4_1;
class Class_2_E7B5A02ED2B31407;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class CameraMoveModeData; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E90FBC302A79C3BF_METHOD_2_0B22913874D56C50_OFFSET UNITYSDK_OFFSET(0x1A66AC70)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_0C9F7CF5621DCBFD_OFFSET UNITYSDK_OFFSET(0x1A667200)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_1B97FFA06D139FFB_OFFSET UNITYSDK_OFFSET(0x1A668A10)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_2AA4F08475B70FDB_OFFSET UNITYSDK_OFFSET(0x1A66B980)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_344721B995D38F85_OFFSET UNITYSDK_OFFSET(0x1A66A8B0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_3610BFC3F1D1197E_OFFSET UNITYSDK_OFFSET(0x1A6687D0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_368E9DBFB1C31641_OFFSET UNITYSDK_OFFSET(0x1A6688F0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1A667840)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_5022DB1DC5AA8CB4_1_OFFSET UNITYSDK_OFFSET(0x1A66B8E0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x1A66B2B0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_51AA029DE3B8B5BD_OFFSET UNITYSDK_OFFSET(0x1A66A2A0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_61EA3C2D843BEF3E_1_OFFSET UNITYSDK_OFFSET(0x1A66A700)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_61EA3C2D843BEF3E_OFFSET UNITYSDK_OFFSET(0x1A66A0F0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_64E9C5A17BEC9C0F_OFFSET UNITYSDK_OFFSET(0x1A669AE0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_6CA5521A4E9CFEE9_OFFSET UNITYSDK_OFFSET(0x1A667400)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_6F2456C76DDD8FEF_1_OFFSET UNITYSDK_OFFSET(0x1A667EB0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_6F2456C76DDD8FEF_OFFSET UNITYSDK_OFFSET(0x1A668340)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_8AC9D17077652E69_OFFSET UNITYSDK_OFFSET(0x1A66AAB0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A6671F0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_AD9D221401A49B93_1_OFFSET UNITYSDK_OFFSET(0x1A66AD10)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_AD9D221401A49B93_2_OFFSET UNITYSDK_OFFSET(0x1A66B3F0)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_AD9D221401A49B93_OFFSET UNITYSDK_OFFSET(0x1A66A370)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_B425254EC4B7BAD9_OFFSET UNITYSDK_OFFSET(0x1A667A60)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_BDB17D3508AC2416_1_OFFSET UNITYSDK_OFFSET(0x1A66B150)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_BDB17D3508AC2416_OFFSET UNITYSDK_OFFSET(0x1A669980)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_DA624ED5E7AFDE43_OFFSET UNITYSDK_OFFSET(0x1A66B830)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_F343EB366B5A896D_OFFSET UNITYSDK_OFFSET(0x1A66B350)
#define CLASS_2_E90FBC302A79C3BF_METHOD_2_FCA7C739F8E5F729_OFFSET UNITYSDK_OFFSET(0x1A66BF70)
#define CLASS_2_E90FBC302A79C3BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A669860)

inline static constexpr unsigned int Class_2_E90FBC302A79C3BF_TypeDefinitionIndex = 54068;

class Class_2_E90FBC302A79C3BF : public ::Class_1_2A3859B4230FECE9
{
public:
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_9; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_8; // 0x48
	::Class_2_E7B5A02ED2B31407* Field_2_7; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_10; // 0x58
	::Struct_2_7E9A981C4706FCC7 Field_2_6; // 0x60
	::System::Boolean Field_2_11; // 0xF0
	::System::Boolean Field_2_0; // 0xF1
	::Struct_2_7E9A981C4706FCC7 Field_2_5; // 0xF4
	::System::Int32 Field_2_4; // 0x184

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_0C9F7CF5621DCBFD(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_0C9F7CF5621DCBFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6CA5521A4E9CFEE9(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_6CA5521A4E9CFEE9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BDB17D3508AC2416(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_BDB17D3508AC2416_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_64E9C5A17BEC9C0F(::Struct_2_7E9A981C4706FCC7& a1, ::Struct_2_7E9A981C4706FCC7& a2, ::Enum_3_1003E4A6E5149B9E a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7E9A981C4706FCC7&, ::Struct_2_7E9A981C4706FCC7&, ::Enum_3_1003E4A6E5149B9E))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_64E9C5A17BEC9C0F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_61EA3C2D843BEF3E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_61EA3C2D843BEF3E_OFFSET))(this, a1);
	}

	::System::Single Method_2_51AA029DE3B8B5BD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_51AA029DE3B8B5BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD9D221401A49B93(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_AD9D221401A49B93_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EA3C2D843BEF3E_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_61EA3C2D843BEF3E_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B425254EC4B7BAD9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_B425254EC4B7BAD9_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B22913874D56C50(::MoleMole::Cameras::CameraMoveModeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraMoveModeData*))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_0B22913874D56C50_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD9D221401A49B93_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_AD9D221401A49B93_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BDB17D3508AC2416_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_BDB17D3508AC2416_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_BEF5F5E810036AF4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BEF5F5E810036AF4*))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F343EB366B5A896D(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_F343EB366B5A896D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD9D221401A49B93_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_AD9D221401A49B93_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B97FFA06D139FFB(::Struct_2_7E9A981C4706FCC7& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_1B97FFA06D139FFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_344721B995D38F85(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_344721B995D38F85_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA624ED5E7AFDE43(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_DA624ED5E7AFDE43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6F2456C76DDD8FEF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_6F2456C76DDD8FEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4_1(::Class_1_BEF5F5E810036AF4_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BEF5F5E810036AF4_1*))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_5022DB1DC5AA8CB4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_368E9DBFB1C31641(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_368E9DBFB1C31641_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F2456C76DDD8FEF_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_6F2456C76DDD8FEF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AA4F08475B70FDB(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_2AA4F08475B70FDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8AC9D17077652E69(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_8AC9D17077652E69_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCA7C739F8E5F729(::Struct_2_7E9A981C4706FCC7& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_FCA7C739F8E5F729_OFFSET))(this, a1);
	}

	::System::Void Method_2_3610BFC3F1D1197E(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_E90FBC302A79C3BF_METHOD_2_3610BFC3F1D1197E_OFFSET))(this, a1, a2);
	}
};
