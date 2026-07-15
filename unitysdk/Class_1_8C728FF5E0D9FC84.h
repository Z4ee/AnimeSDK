#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_0_16E4307DCC419505_356;
class Class_0_16E4307DCC419505_360;
class Class_1_4DE3384CF7EA8A53;
class Class_1_EAF7984A8FAD6BE4;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_00D4BDB4BB4FC558_OFFSET UNITYSDK_OFFSET(0x15F15A60)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_027F588E0D62190F_OFFSET UNITYSDK_OFFSET(0x15F17290)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_07CE13C6941AF1CF_OFFSET UNITYSDK_OFFSET(0x15F16170)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0x15F17100)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_0ECFF045A8501DC8_OFFSET UNITYSDK_OFFSET(0x15F16EC0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x15F189E0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_20B4BA56DCABD50C_OFFSET UNITYSDK_OFFSET(0x15F18510)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_2662DCA654B492AC_OFFSET UNITYSDK_OFFSET(0x15F18610)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_2DA8F7A684C1DC34_1_OFFSET UNITYSDK_OFFSET(0x15F19040)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x15F18BB0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_2DAAC5D5D3F3BDB2_OFFSET UNITYSDK_OFFSET(0x15F18AA0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_360213EA2B4175B6_OFFSET UNITYSDK_OFFSET(0x15F171F0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_3CF7849E81F3890D_OFFSET UNITYSDK_OFFSET(0x15F179F0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_3F551CA7CE8CB48B_OFFSET UNITYSDK_OFFSET(0x15F17F60)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_43FE540B6777BEA4_OFFSET UNITYSDK_OFFSET(0x15F18140)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_4643EFEF20ABE920_OFFSET UNITYSDK_OFFSET(0x15F167B0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_480E4C8C1228969A_OFFSET UNITYSDK_OFFSET(0x15F15BB0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x15F158E0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x15F188B0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0x15F159D0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_56055B445D3630C6_OFFSET UNITYSDK_OFFSET(0x15F16420)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_73C17FD8B89B0975_OFFSET UNITYSDK_OFFSET(0x15F160C0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x15F16D40)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_8D388218652F2B2F_OFFSET UNITYSDK_OFFSET(0x15F15D80)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_8EA1FA93B22B8B67_OFFSET UNITYSDK_OFFSET(0x15F181F0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_9B2412E8A1EED468_OFFSET UNITYSDK_OFFSET(0x15F18010)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_A00616068AF572CA_OFFSET UNITYSDK_OFFSET(0x15F16020)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_AC33F5118DDD40E4_OFFSET UNITYSDK_OFFSET(0x15F16230)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_AE8507C6D2B320B5_OFFSET UNITYSDK_OFFSET(0x15F165A0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_AFB2A906AA9E95DD_OFFSET UNITYSDK_OFFSET(0x15F183E0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_B7711D67B612F246_OFFSET UNITYSDK_OFFSET(0x15F15E20)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_BD884E06E6D0FDD0_OFFSET UNITYSDK_OFFSET(0x15F18370)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x15F18D00)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_CB411325E253257F_OFFSET UNITYSDK_OFFSET(0x15F16480)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_E04595A63C4CD42B_OFFSET UNITYSDK_OFFSET(0x15F186F0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_E79AA9556A44DEC4_OFFSET UNITYSDK_OFFSET(0x15F15D00)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x15F18F00)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_F6291665F0A30E68_OFFSET UNITYSDK_OFFSET(0x15F15B00)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x15F169F0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_F849F22E419E6E4C_OFFSET UNITYSDK_OFFSET(0x15F18DA0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_FD44841FC85D8CFB_OFFSET UNITYSDK_OFFSET(0x15F158F0)
#define CLASS_1_8C728FF5E0D9FC84_METHOD_1_FDFF0CDE71599938_OFFSET UNITYSDK_OFFSET(0x15F15EC0)
#define CLASS_1_8C728FF5E0D9FC84__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F193C0)
#define CLASS_1_8C728FF5E0D9FC84__CTOR_OFFSET UNITYSDK_OFFSET(0x15F19190)
#define CLASS_1_8C728FF5E0D9FC84__REFRESHHOLDLAYER_B__50_0_OFFSET UNITYSDK_OFFSET(0x15F19420)

inline static constexpr unsigned int Class_1_8C728FF5E0D9FC84_TypeDefinitionIndex = 47588;

class Class_1_8C728FF5E0D9FC84 : public ::System::Object
{
public:
	static ::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_356*>** StaticGet_Field_1_0()
	{
		return (::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_356*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C728FF5E0D9FC84_TypeDefinitionIndex)->GetStaticField(0x3A770);
	}
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::EnviromentControlPriority>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4DE3384CF7EA8A53*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Field_1_5; // 0x30
	::RPG::GameCore::EnviromentControlPriority Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_4DE3384CF7EA8A53*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4DE3384CF7EA8A53*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_1_FD44841FC85D8CFB(::System::Int32 a1, ::RPG::GameCore::EnviromentControlPriority a2, ::Class_1_EAF7984A8FAD6BE4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EnviromentControlPriority, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_FD44841FC85D8CFB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_00D4BDB4BB4FC558(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_00D4BDB4BB4FC558_OFFSET))(this, a1, a2);
	}

	::Class_1_4DE3384CF7EA8A53* Method_1_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_4DE3384CF7EA8A53*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F6291665F0A30E68(::System::Int32 a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_F6291665F0A30E68_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_480E4C8C1228969A(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_480E4C8C1228969A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_8D388218652F2B2F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_8D388218652F2B2F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B7711D67B612F246(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_B7711D67B612F246_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::EnviromentControlPriority>* Method_1_FDFF0CDE71599938()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::EnviromentControlPriority>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_FDFF0CDE71599938_OFFSET))(this);
	}

	::System::Void Method_1_A00616068AF572CA(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_A00616068AF572CA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_07CE13C6941AF1CF(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_07CE13C6941AF1CF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC33F5118DDD40E4(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_AC33F5118DDD40E4_OFFSET))(this, a1);
	}

	::RPG::GameCore::EnviromentControlPriority Method_1_E79AA9556A44DEC4()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_E79AA9556A44DEC4_OFFSET))(this);
	}

	::RPG::GameCore::EnviromentControlPriority Method_1_CB411325E253257F()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_CB411325E253257F_OFFSET))(this);
	}

	::System::Void Method_1_AE8507C6D2B320B5(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_AE8507C6D2B320B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4643EFEF20ABE920(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_4643EFEF20ABE920_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_56055B445D3630C6(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_56055B445D3630C6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_73C17FD8B89B0975(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_73C17FD8B89B0975_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_1_0ECFF045A8501DC8(::RPG::GameCore::EnviromentControlPriority a1, ::EnviromentSystemV2Space::OutputType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::EnviromentSystemV2Space::OutputType))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_0ECFF045A8501DC8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_355* Method_1_360213EA2B4175B6(::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::Class_0_16E4307DCC419505_360* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5)
	{
		return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*, ::RPG::GameCore::EnviromentControlPriority, ::Class_0_16E4307DCC419505_360*, ::EnviromentSystemV2Space::OutputType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_360213EA2B4175B6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_355* Method_1_3F551CA7CE8CB48B(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_360* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Boolean a5, ::System::Action* a6)
	{
		return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean, ::Class_0_16E4307DCC419505_360*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_3F551CA7CE8CB48B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_027F588E0D62190F(::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_027F588E0D62190F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9B2412E8A1EED468(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_9B2412E8A1EED468_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_43FE540B6777BEA4(::System::Int64 a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_356* a3)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_356*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_43FE540B6777BEA4_OFFSET))(a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_355* Method_1_3CF7849E81F3890D(::Class_0_16E4307DCC419505_360* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID, ::Class_0_16E4307DCC419505_360*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_3CF7849E81F3890D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8EA1FA93B22B8B67(::Class_1_EAF7984A8FAD6BE4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_8EA1FA93B22B8B67_OFFSET))(this, a1, a2);
	}

	::Class_1_EAF7984A8FAD6BE4* Method_1_BD884E06E6D0FDD0(::System::Int32 a1)
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_BD884E06E6D0FDD0_OFFSET))(this, a1);
	}

	::System::Void Method_1_20B4BA56DCABD50C(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_20B4BA56DCABD50C_OFFSET))(this, a1, a2);
	}

	static ::Class_1_EAF7984A8FAD6BE4* Method_1_AFB2A906AA9E95DD(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_AFB2A906AA9E95DD_OFFSET))(a1, a2);
	}

	::System::Void Method_1_2662DCA654B492AC(::Class_1_EAF7984A8FAD6BE4* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_2662DCA654B492AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E04595A63C4CD42B(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_E04595A63C4CD42B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C288C0C3DC7B4CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_4C288C0C3DC7B4CA_OFFSET))(this);
	}

	::System::Void Method_1_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_1092C5537716905B_OFFSET))(this);
	}

	::System::Void Method_1_2DAAC5D5D3F3BDB2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_2DAAC5D5D3F3BDB2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_2DA8F7A684C1DC34_OFFSET))(this);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::EnviromentSystemV2Space::PropertyType Method_1_F849F22E419E6E4C(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::EnviromentSystemV2Space::PropertyType(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_F849F22E419E6E4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_1_2DA8F7A684C1DC34_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84_METHOD_1_2DA8F7A684C1DC34_1_OFFSET))(this);
	}

	::System::Boolean _RefreshHoldLayer_b__50_0(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__REFRESHHOLDLAYER_B__50_0_OFFSET))(this, a1);
	}
};
