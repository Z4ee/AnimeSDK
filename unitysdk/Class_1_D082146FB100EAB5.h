#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/LoadingDescGroup.h"
#include "unitysdk/System/Object.h"

class Class_1_0F724F8EDC601A3C;
namespace RPG::Client { template <typename T> class LoadingTipsRandomPool_1; }
namespace RPG::GameCore { class LoadingDescRow; }
namespace RPG::GameCore { class LoadingFuncConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D082146FB100EAB5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11579D60)
#define CLASS_1_D082146FB100EAB5_METHOD_1_01726C54B7142C95_1_OFFSET UNITYSDK_OFFSET(0x11579400)
#define CLASS_1_D082146FB100EAB5_METHOD_1_01726C54B7142C95_OFFSET UNITYSDK_OFFSET(0x11579340)
#define CLASS_1_D082146FB100EAB5_METHOD_1_0563A943CEE0E418_OFFSET UNITYSDK_OFFSET(0x115794C0)
#define CLASS_1_D082146FB100EAB5_METHOD_1_1D00B9E1ACC7B624_OFFSET UNITYSDK_OFFSET(0x1157B5C0)
#define CLASS_1_D082146FB100EAB5_METHOD_1_216CF377002E5879_OFFSET UNITYSDK_OFFSET(0x11579790)
#define CLASS_1_D082146FB100EAB5_METHOD_1_42F8058155D4014E_OFFSET UNITYSDK_OFFSET(0x1157B4C0)
#define CLASS_1_D082146FB100EAB5_METHOD_1_57F50D8CDD0407CC_OFFSET UNITYSDK_OFFSET(0x1157A0C0)
#define CLASS_1_D082146FB100EAB5_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1157B470)
#define CLASS_1_D082146FB100EAB5_METHOD_1_969A0AACBC751E99_1_OFFSET UNITYSDK_OFFSET(0x1157B640)
#define CLASS_1_D082146FB100EAB5_METHOD_1_969A0AACBC751E99_OFFSET UNITYSDK_OFFSET(0x1157B550)
#define CLASS_1_D082146FB100EAB5_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x11579B00)
#define CLASS_1_D082146FB100EAB5_METHOD_1_B4224E05991AB5BC_OFFSET UNITYSDK_OFFSET(0x11579190)
#define CLASS_1_D082146FB100EAB5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11579AA0)
#define CLASS_1_D082146FB100EAB5_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x1157B090)
#define CLASS_1_D082146FB100EAB5_METHOD_1_E9DB72A36580DE31_OFFSET UNITYSDK_OFFSET(0x115795A0)
#define CLASS_1_D082146FB100EAB5_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x1157A2F0)
#define CLASS_1_D082146FB100EAB5__CTOR_OFFSET UNITYSDK_OFFSET(0x11579890)

inline static constexpr unsigned int Class_1_D082146FB100EAB5_TypeDefinitionIndex = 53404;

class Class_1_D082146FB100EAB5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::System::Collections::Generic::List_1<::RPG::GameCore::LoadingDescRow*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescRow*>*>* Field_1_11; // 0x18
	::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescGroup>* Field_1_9; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescRow*>*>* Field_1_10; // 0x28
	::RPG::Client::LoadingTipsRandomPool_1<::RPG::GameCore::LoadingDescGroup>* Field_1_8; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::LoadingDescRow*>* Field_1_12; // 0x38
	::RPG::GameCore::LoadingFuncConfigRow* Field_1_1; // 0x40
	::System::Int32 Field_1_13; // 0x48
	::System::UInt32 Field_1_6; // 0x4C
	::System::UInt32 Field_1_3; // 0x50
	::System::UInt32 Field_1_2; // 0x54
	::RPG::GameCore::GameModeType Field_1_4; // 0x58
	::System::Boolean Field_1_7; // 0x5C
	::System::UInt32 Field_1_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B4224E05991AB5BC(::Class_1_0F724F8EDC601A3C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0F724F8EDC601A3C*))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_B4224E05991AB5BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_01726C54B7142C95(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_01726C54B7142C95_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_01726C54B7142C95_1(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_01726C54B7142C95_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0563A943CEE0E418(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a1, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*, ::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_0563A943CEE0E418_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E9DB72A36580DE31()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_E9DB72A36580DE31_OFFSET))(this);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_216CF377002E5879(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::Il2CppArray<::Class_1_0F724F8EDC601A3C*>*))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_216CF377002E5879_OFFSET))(a1);
	}

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_57F50D8CDD0407CC(::RPG::GameCore::LoadingFuncConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LoadingFuncConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_57F50D8CDD0407CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::LoadingDescRow* Method_1_42F8058155D4014E()
	{
		return ((::RPG::GameCore::LoadingDescRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_42F8058155D4014E_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Boolean Method_1_969A0AACBC751E99(::RPG::GameCore::LoadingDescRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_969A0AACBC751E99_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D00B9E1ACC7B624(::RPG::GameCore::LoadingDescRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_1D00B9E1ACC7B624_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_969A0AACBC751E99_1(::RPG::GameCore::LoadingDescRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + CLASS_1_D082146FB100EAB5_METHOD_1_969A0AACBC751E99_1_OFFSET))(this, a1);
	}
};
