#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CAKECATCHCATGODDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB4691C0)
#define RPG_CLIENT_CAKECATCHCATGODDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB469320)
#define RPG_CLIENT_CAKECATCHCATGODDATA_GET_CATIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB469380)
#define RPG_CLIENT_CAKECATCHCATGODDATA_GET_CATNAME_OFFSET UNITYSDK_OFFSET(0xB4693A0)
#define RPG_CLIENT_CAKECATCHCATGODDATA_GET_INTERACTCOUNT_OFFSET UNITYSDK_OFFSET(0xB469360)
#define RPG_CLIENT_CAKECATCHCATGODDATA_SET_CATIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB469390)
#define RPG_CLIENT_CAKECATCHCATGODDATA_SET_CATNAME_OFFSET UNITYSDK_OFFSET(0xB4693B0)
#define RPG_CLIENT_CAKECATCHCATGODDATA_SET_INTERACTCOUNT_OFFSET UNITYSDK_OFFSET(0xB469370)
#define RPG_CLIENT_CAKECATCHCATGODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB469310)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchCatGodData_TypeDefinitionIndex = 58936;

	class CakeCatchCatGodData : public ::System::Object
	{
	public:
		::System::String* _CatImagePath_k__BackingField; // 0x10
		::System::UInt32 _InteractCount_k__BackingField; // 0x18
		::RPG::Client::TextID _CatName_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCATGODDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeCatchCatGodData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchCatGodData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCATGODDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCATGODDATA_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_InteractCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCATGODDATA_GET_INTERACTCOUNT_OFFSET))(this);
		}

		::System::Void set_InteractCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCATGODDATA_SET_INTERACTCOUNT_OFFSET))(this, a1);
		}

		::System::String* get_CatImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCATGODDATA_GET_CATIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_CatImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCATGODDATA_SET_CATIMAGEPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CatName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCATGODDATA_GET_CATNAME_OFFSET))(this);
		}

		::System::Void set_CatName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHCATGODDATA_SET_CATNAME_OFFSET))(this, a1);
		}
	};
}
