#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_399;
class Class_1_D03B7FDF2C9D959B;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarProxy; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F730CFFB290B1944_METHOD_1_022A1201E83BA49D_1_OFFSET UNITYSDK_OFFSET(0x13B169B0)
#define CLASS_1_F730CFFB290B1944_METHOD_1_022A1201E83BA49D_OFFSET UNITYSDK_OFFSET(0x13B16960)
#define CLASS_1_F730CFFB290B1944_METHOD_1_0E3F2BFE6B76017E_OFFSET UNITYSDK_OFFSET(0x13B16910)
#define CLASS_1_F730CFFB290B1944_METHOD_1_1A2791C44B77CD41_OFFSET UNITYSDK_OFFSET(0x13B15ED0)
#define CLASS_1_F730CFFB290B1944_METHOD_1_24C577CDC92A2523_OFFSET UNITYSDK_OFFSET(0x13B15E40)
#define CLASS_1_F730CFFB290B1944_METHOD_1_24DDBE0B1A4A8BFD_1_OFFSET UNITYSDK_OFFSET(0x13B16860)
#define CLASS_1_F730CFFB290B1944_METHOD_1_24DDBE0B1A4A8BFD_OFFSET UNITYSDK_OFFSET(0x13B167B0)
#define CLASS_1_F730CFFB290B1944_METHOD_1_43DA061CC6BDFEA1_OFFSET UNITYSDK_OFFSET(0x13B16090)
#define CLASS_1_F730CFFB290B1944_METHOD_1_47B2406AA3D99A1B_OFFSET UNITYSDK_OFFSET(0x13B156D0)
#define CLASS_1_F730CFFB290B1944_METHOD_1_5D0F7C2E3D59BB96_OFFSET UNITYSDK_OFFSET(0x13B152C0)
#define CLASS_1_F730CFFB290B1944_METHOD_1_5E0B10D62EB18FB7_1_OFFSET UNITYSDK_OFFSET(0x13B15550)
#define CLASS_1_F730CFFB290B1944_METHOD_1_5E0B10D62EB18FB7_OFFSET UNITYSDK_OFFSET(0x13B16290)
#define CLASS_1_F730CFFB290B1944_METHOD_1_724DB7974C1E3562_1_OFFSET UNITYSDK_OFFSET(0x13B16000)
#define CLASS_1_F730CFFB290B1944_METHOD_1_724DB7974C1E3562_OFFSET UNITYSDK_OFFSET(0x13B15F70)
#define CLASS_1_F730CFFB290B1944_METHOD_1_7918CE37A27F913B_1_OFFSET UNITYSDK_OFFSET(0x13B165D0)
#define CLASS_1_F730CFFB290B1944_METHOD_1_7918CE37A27F913B_OFFSET UNITYSDK_OFFSET(0x13B163F0)
#define CLASS_1_F730CFFB290B1944_METHOD_1_7D281EC8959A1432_OFFSET UNITYSDK_OFFSET(0x13B15350)
#define CLASS_1_F730CFFB290B1944_METHOD_1_8F6A0F1EB1FFEDE5_OFFSET UNITYSDK_OFFSET(0x13B158D0)
#define CLASS_1_F730CFFB290B1944_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x13B14E30)
#define CLASS_1_F730CFFB290B1944_METHOD_1_E4409B7064178705_OFFSET UNITYSDK_OFFSET(0x13B15110)
#define CLASS_1_F730CFFB290B1944__CTOR_OFFSET UNITYSDK_OFFSET(0x13B14E80)

inline static constexpr unsigned int Class_1_F730CFFB290B1944_TypeDefinitionIndex = 58633;

class Class_1_F730CFFB290B1944 : public ::System::Object
{
public:
	::Class_1_D03B7FDF2C9D959B* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_BC950E36747FB4C9, ::RPG::AvatarSystem::Avatar*>* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_360* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_2, ::RPG::Client::AvatarProxy*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_2, ::RPG::Client::AvatarProxy*>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarProxy*>* Field_1_5; // 0x38
	::Class_0_16E4307DCC419505_399* Field_1_6; // 0x40

	::System::Void _ctor(::Class_0_16E4307DCC419505_399* a1, ::Class_1_D03B7FDF2C9D959B* a2, ::Class_0_16E4307DCC419505_360* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_399*, ::Class_1_D03B7FDF2C9D959B*, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::AvatarSystem::Avatar* Method_1_E4409B7064178705(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_E4409B7064178705_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::Avatar*>* Method_1_5D0F7C2E3D59BB96(::Struct_2_019938BC9C50B169_2 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::Avatar*>*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_5D0F7C2E3D59BB96_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D281EC8959A1432(::Struct_2_019938BC9C50B169_2& a1, ::Struct_2_BC950E36747FB4C9& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_7D281EC8959A1432_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_47B2406AA3D99A1B(::Struct_2_019938BC9C50B169_1& a1, ::Struct_2_019938BC9C50B169_2& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_47B2406AA3D99A1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F6A0F1EB1FFEDE5(::Struct_2_019938BC9C50B169_2& a1, ::Struct_2_019938BC9C50B169_1& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_8F6A0F1EB1FFEDE5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* Method_1_24C577CDC92A2523()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_24C577CDC92A2523_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* Method_1_1A2791C44B77CD41(::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_1A2791C44B77CD41_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_724DB7974C1E3562(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_724DB7974C1E3562_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_724DB7974C1E3562_1(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_724DB7974C1E3562_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_43DA061CC6BDFEA1(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_43DA061CC6BDFEA1_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_5E0B10D62EB18FB7(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_5E0B10D62EB18FB7_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_5E0B10D62EB18FB7_1(::Struct_2_BC950E36747FB4C9& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_5E0B10D62EB18FB7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7918CE37A27F913B(::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_7918CE37A27F913B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7918CE37A27F913B_1(::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_7918CE37A27F913B_1_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_24DDBE0B1A4A8BFD(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_24DDBE0B1A4A8BFD_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_24DDBE0B1A4A8BFD_1(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_24DDBE0B1A4A8BFD_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0E3F2BFE6B76017E(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_0E3F2BFE6B76017E_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_022A1201E83BA49D(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_022A1201E83BA49D_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_022A1201E83BA49D_1(::Struct_2_BC950E36747FB4C9& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944_METHOD_1_022A1201E83BA49D_1_OFFSET))(this, a1);
	}
};
