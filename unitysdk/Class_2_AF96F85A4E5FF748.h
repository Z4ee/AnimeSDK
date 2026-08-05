#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2A3859B4230FECE9.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"

class Class_1_5738DDFE3F32F812;
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AF96F85A4E5FF748_METHOD_2_0DA9A964A9F3B516_OFFSET UNITYSDK_OFFSET(0x1774B110)
#define CLASS_2_AF96F85A4E5FF748_METHOD_2_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x1774B570)
#define CLASS_2_AF96F85A4E5FF748_METHOD_2_8AC9D17077652E69_OFFSET UNITYSDK_OFFSET(0x1774B6B0)
#define CLASS_2_AF96F85A4E5FF748_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1774AEF0)
#define CLASS_2_AF96F85A4E5FF748_METHOD_2_B425254EC4B7BAD9_OFFSET UNITYSDK_OFFSET(0x1774BC20)
#define CLASS_2_AF96F85A4E5FF748_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x1774B070)
#define CLASS_2_AF96F85A4E5FF748_METHOD_2_DA624ED5E7AFDE43_1_OFFSET UNITYSDK_OFFSET(0x1774AFC0)
#define CLASS_2_AF96F85A4E5FF748_METHOD_2_DA624ED5E7AFDE43_OFFSET UNITYSDK_OFFSET(0x1774AF00)
#define CLASS_2_AF96F85A4E5FF748_METHOD_2_FA4A64C9A59CC8E0_OFFSET UNITYSDK_OFFSET(0x1774B8A0)
#define CLASS_2_AF96F85A4E5FF748__CTOR_OFFSET UNITYSDK_OFFSET(0x1774AF60)

inline static constexpr unsigned int Class_2_AF96F85A4E5FF748_TypeDefinitionIndex = 54441;

class Class_2_AF96F85A4E5FF748 : public ::Class_1_2A3859B4230FECE9
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x38
	::MoleMole::Config::ConfigCameraComposer* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_DA624ED5E7AFDE43(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748_METHOD_2_DA624ED5E7AFDE43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DA624ED5E7AFDE43_1(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748_METHOD_2_DA624ED5E7AFDE43_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_5738DDFE3F32F812* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5738DDFE3F32F812*))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DA9A964A9F3B516(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748_METHOD_2_0DA9A964A9F3B516_OFFSET))(this, a1);
	}

	::System::Void Method_2_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748_METHOD_2_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AC9D17077652E69(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748_METHOD_2_8AC9D17077652E69_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA4A64C9A59CC8E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748_METHOD_2_FA4A64C9A59CC8E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_B425254EC4B7BAD9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF96F85A4E5FF748_METHOD_2_B425254EC4B7BAD9_OFFSET))(this, a1);
	}
};
