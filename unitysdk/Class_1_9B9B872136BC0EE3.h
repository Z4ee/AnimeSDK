#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarPropertyUIData; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class AvatarServantRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantConfig; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class ServantSkillRowData; }
namespace System { class String; }

#define CLASS_1_9B9B872136BC0EE3_METHOD_1_0231FD957655367B_OFFSET UNITYSDK_OFFSET(0x110C1620)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_0578DD118BB0FD63_OFFSET UNITYSDK_OFFSET(0x110C1F30)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_1088DB2C3685103F_OFFSET UNITYSDK_OFFSET(0x110C2840)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_21E86FE4B95257A5_OFFSET UNITYSDK_OFFSET(0x110C2590)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x110C27B0)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_60683BC13743E73D_OFFSET UNITYSDK_OFFSET(0x110C2860)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_61D470FD4D99A63B_1_OFFSET UNITYSDK_OFFSET(0x110C1A20)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_61D470FD4D99A63B_OFFSET UNITYSDK_OFFSET(0x110C1590)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_74439A9FABAFE511_OFFSET UNITYSDK_OFFSET(0x110C2750)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_79B4B56F415737E6_OFFSET UNITYSDK_OFFSET(0x110C1400)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x110C2890)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_8B761A55FBFEF6AB_OFFSET UNITYSDK_OFFSET(0x110C2880)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_8DD1772984E09519_OFFSET UNITYSDK_OFFSET(0x110C2200)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x110C24B0)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_ABD03E1B1941AF9B_OFFSET UNITYSDK_OFFSET(0x110C1AB0)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_CBCACA387F024A66_OFFSET UNITYSDK_OFFSET(0x110C2110)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_CD6FEC127CA76584_OFFSET UNITYSDK_OFFSET(0x110C2510)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_D525BB291BF37978_OFFSET UNITYSDK_OFFSET(0x110C2870)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_E63B2D192A140C14_OFFSET UNITYSDK_OFFSET(0x110C2040)
#define CLASS_1_9B9B872136BC0EE3_METHOD_1_E815747A32C48A20_OFFSET UNITYSDK_OFFSET(0x110C28F0)
#define CLASS_1_9B9B872136BC0EE3__CTOR_OFFSET UNITYSDK_OFFSET(0x110C1550)

inline static constexpr unsigned int Class_1_9B9B872136BC0EE3_TypeDefinitionIndex = 50768;

class Class_1_9B9B872136BC0EE3 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::RPG::GameCore::ServantConfig* Field_1_2; // 0x10
	::RPG::Client::AvatarData* Field_1_1; // 0x18
	::RPG::GameCore::ServantRowData* Field_1_4; // 0x20
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::ServantSkillRowData*>* Field_1_5; // 0x28
	::RPG::GameCore::AvatarServantRow* Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3__CTOR_OFFSET))(this);
	}

	static ::Class_1_9B9B872136BC0EE3* Method_1_79B4B56F415737E6(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_1_9B9B872136BC0EE3*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_79B4B56F415737E6_OFFSET))(a1);
	}

	::System::String* Method_1_61D470FD4D99A63B(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_61D470FD4D99A63B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_61D470FD4D99A63B_1(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_61D470FD4D99A63B_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_0578DD118BB0FD63(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_0578DD118BB0FD63_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_0231FD957655367B(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_0231FD957655367B_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_ABD03E1B1941AF9B(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_ABD03E1B1941AF9B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_E63B2D192A140C14(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_E63B2D192A140C14_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::AvatarPropertyUIData* Method_1_8DD1772984E09519(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::Client::AvatarPropertyUIData*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_8DD1772984E09519_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CBCACA387F024A66(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_CBCACA387F024A66_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_CD6FEC127CA76584(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_CD6FEC127CA76584_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_21E86FE4B95257A5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_21E86FE4B95257A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_74439A9FABAFE511()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_74439A9FABAFE511_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_1088DB2C3685103F()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_1088DB2C3685103F_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::RPG::GameCore::ServantConfig* Method_1_60683BC13743E73D()
	{
		return ((::RPG::GameCore::ServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_60683BC13743E73D_OFFSET))(this);
	}

	::RPG::GameCore::AvatarServantRow* Method_1_D525BB291BF37978()
	{
		return ((::RPG::GameCore::AvatarServantRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_D525BB291BF37978_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_1_8B761A55FBFEF6AB()
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_8B761A55FBFEF6AB_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::GameCore::ServantRowData* Method_1_E815747A32C48A20()
	{
		return ((::RPG::GameCore::ServantRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9B872136BC0EE3_METHOD_1_E815747A32C48A20_OFFSET))(this);
	}
};
