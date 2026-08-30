#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_669;
class Class_0_16E4307DCC419505_845;
class Class_1_6CB9D8ECA6D8C71B;
class Class_1_F9FBCC956DFCF137_19;
namespace RPG::GameCore { class FateTextDynamicParamConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_32161F1E0F11BEF4_METHOD_1_0A5178D831D6A5FE_OFFSET UNITYSDK_OFFSET(0xC4110B0)
#define CLASS_1_32161F1E0F11BEF4_METHOD_1_4818B55B00AA691C_OFFSET UNITYSDK_OFFSET(0xC410700)
#define CLASS_1_32161F1E0F11BEF4_METHOD_1_5CA9F168392AE98C_OFFSET UNITYSDK_OFFSET(0xC410EF0)
#define CLASS_1_32161F1E0F11BEF4_METHOD_1_E0D86F0E211F89F2_OFFSET UNITYSDK_OFFSET(0xC410AD0)
#define CLASS_1_32161F1E0F11BEF4_METHOD_1_EEBB6F56BEF2DBC3_OFFSET UNITYSDK_OFFSET(0xC410E90)
#define CLASS_1_32161F1E0F11BEF4__CTOR_OFFSET UNITYSDK_OFFSET(0xC4106F0)

inline static constexpr unsigned int Class_1_32161F1E0F11BEF4_TypeDefinitionIndex = 64197;

class Class_1_32161F1E0F11BEF4 : public ::System::Object
{
public:
	// static const ::System::Int32 COBAKFNJKPG = 0x14; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_845*>* MLNLKAEKPJN; // 0x10
	::Class_0_16E4307DCC419505_669* DCODGIIFGPI; // 0x18
	::RPG::Client::TextID DIDPADKMCAL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32161F1E0F11BEF4__CTOR_OFFSET))(this);
	}

	static ::Class_1_32161F1E0F11BEF4* Method_1_4818B55B00AA691C(::RPG::Client::TextID a1, ::RPG::GameCore::FateTextDynamicParamConfig* a2, ::Class_1_F9FBCC956DFCF137_19* a3, ::Class_1_6CB9D8ECA6D8C71B* a4)
	{
		return ((::Class_1_32161F1E0F11BEF4*(*)(::RPG::Client::TextID, ::RPG::GameCore::FateTextDynamicParamConfig*, ::Class_1_F9FBCC956DFCF137_19*, ::Class_1_6CB9D8ECA6D8C71B*))((::PBYTE)hIl2Cpp + CLASS_1_32161F1E0F11BEF4_METHOD_1_4818B55B00AA691C_OFFSET))(a1, a2, a3, a4);
	}

	::System::String* Method_1_E0D86F0E211F89F2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32161F1E0F11BEF4_METHOD_1_E0D86F0E211F89F2_OFFSET))(this);
	}

	::Il2CppArray<::System::Object*>* Method_1_EEBB6F56BEF2DBC3(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_32161F1E0F11BEF4_METHOD_1_EEBB6F56BEF2DBC3_OFFSET))(this, a1);
	}

	static ::Il2CppArray<::System::Object*>* Method_1_0A5178D831D6A5FE(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_32161F1E0F11BEF4_METHOD_1_0A5178D831D6A5FE_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Object*>* Method_1_5CA9F168392AE98C(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_32161F1E0F11BEF4_METHOD_1_5CA9F168392AE98C_OFFSET))(a1, a2);
	}
};
