#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_41373B0AE65CE02E_10.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1119;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B814B4282C2760B6_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19033530)
#define CLASS_1_B814B4282C2760B6_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x19033430)
#define CLASS_1_B814B4282C2760B6_METHOD_1_08CB237FDC93F760_OFFSET UNITYSDK_OFFSET(0x19033F30)
#define CLASS_1_B814B4282C2760B6_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x190330A0)
#define CLASS_1_B814B4282C2760B6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19033AF0)
#define CLASS_1_B814B4282C2760B6_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19033370)
#define CLASS_1_B814B4282C2760B6_METHOD_1_6B74C3F26B4FF2B2_OFFSET UNITYSDK_OFFSET(0x19033C30)
#define CLASS_1_B814B4282C2760B6_METHOD_1_7D4C528272832010_OFFSET UNITYSDK_OFFSET(0x19033B80)
#define CLASS_1_B814B4282C2760B6_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x19033100)
#define CLASS_1_B814B4282C2760B6_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x190333E0)
#define CLASS_1_B814B4282C2760B6_METHOD_1_BB8B7E94565DB6BE_OFFSET UNITYSDK_OFFSET(0x19033D10)
#define CLASS_1_B814B4282C2760B6_METHOD_1_BD6D492CF74B71A3_OFFSET UNITYSDK_OFFSET(0x190335F0)
#define CLASS_1_B814B4282C2760B6_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x190336E0)
#define CLASS_1_B814B4282C2760B6_METHOD_1_EDF2DD59FD28DDB9_OFFSET UNITYSDK_OFFSET(0x19033820)
#define CLASS_1_B814B4282C2760B6__CTOR_OFFSET UNITYSDK_OFFSET(0x19033750)

inline static constexpr unsigned int Class_1_B814B4282C2760B6_TypeDefinitionIndex = 43272;

class Class_1_B814B4282C2760B6 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_2; // 0x18
	::Struct_2_41373B0AE65CE02E_10 Field_1_0; // 0x20
	::Il2CppArray<::Class_2_208CC9941471731A_1119*>* Field_1_1; // 0x38
	::System::Boolean Field_1_5; // 0x40
	::System::Int32 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_BD6D492CF74B71A3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_BD6D492CF74B71A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1119* Method_1_EDF2DD59FD28DDB9(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_1119*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_EDF2DD59FD28DDB9_OFFSET))(this, a1);
	}

	::Foundation::AssetPath Method_1_7D4C528272832010(::System::String* a1)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_7D4C528272832010_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_1119*>* Method_1_6B74C3F26B4FF2B2()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_1119*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_6B74C3F26B4FF2B2_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1119* Method_1_BB8B7E94565DB6BE(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1119*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_BB8B7E94565DB6BE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_08CB237FDC93F760()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B814B4282C2760B6_METHOD_1_08CB237FDC93F760_OFFSET))(this);
	}
};
