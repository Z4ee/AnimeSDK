#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/PreReleaseScheduleState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_248D0FC39353F7C1_METHOD_1_29314525EBB5D730_OFFSET UNITYSDK_OFFSET(0xB15F640)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_30DB496D1AD8C951_OFFSET UNITYSDK_OFFSET(0xB15E490)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_37F3135743158817_OFFSET UNITYSDK_OFFSET(0xB15EA80)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_42A561696A7ADA8E_OFFSET UNITYSDK_OFFSET(0xB15F710)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_43B15B40D830F5A1_OFFSET UNITYSDK_OFFSET(0xB15ED40)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_4CF65E7E70660487_OFFSET UNITYSDK_OFFSET(0xB15F190)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0xB15F680)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0xB15EF30)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_7A11C7EAD919FEEA_OFFSET UNITYSDK_OFFSET(0xB15E9C0)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_7DDB6BEA4A1AFC2E_OFFSET UNITYSDK_OFFSET(0xB15E970)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_8353339CC9DFAF40_OFFSET UNITYSDK_OFFSET(0xB15E920)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_8694D2D6B33920D0_1_OFFSET UNITYSDK_OFFSET(0xB15E700)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_8694D2D6B33920D0_OFFSET UNITYSDK_OFFSET(0xB15E4E0)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_8D61BE16C9463302_1_OFFSET UNITYSDK_OFFSET(0xB15E280)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xB15E1C0)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_AF7B93FD42158986_OFFSET UNITYSDK_OFFSET(0xB15ECC0)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_CE3C787E33CDEE3F_1_OFFSET UNITYSDK_OFFSET(0xB15F450)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_CE3C787E33CDEE3F_OFFSET UNITYSDK_OFFSET(0xB15F260)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_D2019F027C6B6510_OFFSET UNITYSDK_OFFSET(0xB15E340)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_D807922E2D9197A9_OFFSET UNITYSDK_OFFSET(0xB15E3D0)
#define CLASS_1_248D0FC39353F7C1_METHOD_1_E5C79B70FD07B68A_OFFSET UNITYSDK_OFFSET(0xB15EFA0)
#define CLASS_1_248D0FC39353F7C1__CTOR_OFFSET UNITYSDK_OFFSET(0xB15F760)

inline static constexpr unsigned int Class_1_248D0FC39353F7C1_TypeDefinitionIndex = 66710;

class Class_1_248D0FC39353F7C1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_8D61BE16C9463302_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_8D61BE16C9463302_1_OFFSET))(this);
	}

	::System::Boolean Method_1_D2019F027C6B6510(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_D2019F027C6B6510_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::UInt32> Method_1_D807922E2D9197A9(::System::UInt32 a1)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_D807922E2D9197A9_OFFSET))(this, a1);
	}

	::RPG::Client::PreReleaseScheduleState Method_1_30DB496D1AD8C951(::System::UInt32 a1)
	{
		return ((::RPG::Client::PreReleaseScheduleState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_30DB496D1AD8C951_OFFSET))(this, a1);
	}

	::System::Void Method_1_8694D2D6B33920D0(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_8694D2D6B33920D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8694D2D6B33920D0_1(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_8694D2D6B33920D0_1_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_8353339CC9DFAF40(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_8353339CC9DFAF40_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_7DDB6BEA4A1AFC2E(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_7DDB6BEA4A1AFC2E_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_7A11C7EAD919FEEA(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_7A11C7EAD919FEEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_37F3135743158817(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_37F3135743158817_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AF7B93FD42158986(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_AF7B93FD42158986_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_43B15B40D830F5A1(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_43B15B40D830F5A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_E5C79B70FD07B68A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_E5C79B70FD07B68A_OFFSET))(this);
	}

	::System::Boolean Method_1_4CF65E7E70660487(::System::UInt32 a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_4CF65E7E70660487_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::Promises::Promise* Method_1_CE3C787E33CDEE3F(::System::UInt32 a1)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_CE3C787E33CDEE3F_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_CE3C787E33CDEE3F_1(::System::UInt32 a1)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_CE3C787E33CDEE3F_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_29314525EBB5D730()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_29314525EBB5D730_OFFSET))(this);
	}

	::System::Void Method_1_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_1_42A561696A7ADA8E(::RPG::Client::NotifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1_METHOD_1_42A561696A7ADA8E_OFFSET))(this, a1);
	}
};
